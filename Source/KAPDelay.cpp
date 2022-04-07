/*
  ==============================================================================

    KAPDelay.cpp
    Created: 6 Apr 2022 9:54:28pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#include "KAPDelay.h"
#include <JuceHeader.h>
#include "KAPAudioHelpers.h"

KAPDelay::KAPDelay()
:   mSampleRate(-1),
    mFeedbackSample(0.0f),
    mDelayIndex(0)
{
    
}
KAPDelay::~KAPDelay()
{
    
}

void KAPDelay::setSampleRate(double inSampleRate)
{
    mSampleRate = inSampleRate;
}

void KAPDelay::reset()
{
    juce::zeromem(mBuffer, sizeof(double) * maxBufferSize);
}

void KAPDelay::process(float* inAudio,
                       float inTime,
                       float inFeedback,
                       float inWetDry,
                       float* inModulationBuffer,
                       float* outAudio,
                       int inNumSamplesToRender)
{
    const float wet = inWetDry;
    const float dry = 1.0f - wet;
    const float feedbackMapped = juce::jmap(inFeedback, 0.0f, 1.0f, 0.0f, 0.95f);
    
    for (int i = 0; i < inNumSamplesToRender; i++) {
        
        const double delayTimeModulation = (0.003 + (0.002 * inModulationBuffer[i]));
        
        const double delayTimeInSamples = inTime * delayTimeModulation * mSampleRate;
        
        const double sample = getInterpolatedSample(delayTimeInSamples);
        
        mBuffer[mDelayIndex] = inAudio[i] + (mFeedbackSample * feedbackMapped);
        
        mFeedbackSample = sample;
        
        outAudio[i] = inAudio[i] * dry + sample * wet;
        
        mDelayIndex = mDelayIndex + 1;
        
        if (mDelayIndex >= maxBufferSize) {
            mDelayIndex -= maxBufferSize;
        }
    }
}

double KAPDelay::getInterpolatedSample(float inDelayTimeInSamples)
{
    double readPosition = (double) mDelayIndex - inDelayTimeInSamples;
    
    if (readPosition < 0.0f) {
        readPosition += maxBufferSize;
    }
    
    int indexY0 = (int) readPosition - 1;
    if (indexY0 <= 0) {
        indexY0 += maxBufferSize;
    }
    
    int indexY1 = readPosition;
    if (indexY1 > maxBufferSize) {
        indexY1 -= maxBufferSize;
    }
    
    const float sampleY0 = mBuffer[indexY0];
    const float sampleY1 = mBuffer[indexY1];
    const float t = readPosition - (int)readPosition;
    
    double outSample = kapLinearInterp(sampleY0, sampleY1, t);
    
    return outSample;
}
