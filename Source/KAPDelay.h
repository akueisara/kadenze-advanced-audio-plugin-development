/*
  ==============================================================================

    KAPDelay.h
    Created: 6 Apr 2022 9:54:14pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

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
    
    double mSampleRate;
    double mBuffer[2048];
    double mFeedbackSample;
    
    int mDelayIndex;
};
