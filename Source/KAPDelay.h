/*
  ==============================================================================

    KAPDelay.h
    Created: 6 Apr 2022 9:54:14pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

// The size has to be larger than delayTimeInSamples
const int maxBufferDelaySize = 192000;

class KAPDelay
{
public:
    
    KAPDelay();
    ~KAPDelay();
    
    void setSampleRate(double inSampleRate);
    
    void reset();
    
    void process(float* inAudio,
                 float inTime,
                 float inFeedback,
                 float inWetDry,
                 float* outAudio,
                 int inNumSamplesToRender);
    
private:
    
    /** internal */
    double getInterpolatedSample(float inDelayTimeInSamples);
    
    double mSampleRate;
    double mBuffer[maxBufferDelaySize];
    double mFeedbackSample;
    
    int mDelayIndex;
};
