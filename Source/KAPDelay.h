/*
  ==============================================================================

    KAPDelay.h
    Created: 6 Apr 2022 9:54:14pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

#include "KAPAudioHelpers.h"

enum KAPDelayType
{
    kKAPDelayType_Delay = 0,
    kKAPDelayType_Chorus
};

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
                 float inType,
                 float* inModulationBuffer,
                 float* outAudio,
                 int inNumSamplesToRender);
    
private:
    
    /** internal */
    double getInterpolatedSample(float inDelayTimeInSamples);
    
    double mSampleRate;
    double mBuffer[maxBufferSize];
    double mFeedbackSample;
    
    float mTimeSmoothed;
    
    int mDelayIndex;
};
