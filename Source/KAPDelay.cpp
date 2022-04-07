/*
  ==============================================================================

    KAPDelay.cpp
    Created: 6 Apr 2022 9:54:28pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#include "KAPDelay.h"

#include <JuceHeader.h>

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
    juce::zeromem(mBuffer, sizeof(double) * 2048);
}

void KAPDelay::process(float* inAudio,
             float inTime,
             float inFeedback,
             float inWetDry,
             float* outAudio,
             int inNumSamplesToRender)
{
    const float wet = inWetDry;
    const float dry = 1.0f - wet;
    const float feedbackMapped = juce::jmap(inFeedback, 0.0f, 1.0f, 0.0f, 0.95f);
}
