/*
  ==============================================================================

    KAPLfo.h
    Created: 6 Apr 2022 9:53:36pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

#include "KAPAudioHelpers.h"

class KAPLfo
{
public:
    
    KAPLfo();
    ~KAPLfo();
    
    void reset();
    
    void setSampleRate(double inSampleRate);
    
    void process(float inRate,
                 float inDepth,
                 int inNumSamples);
    
    float* getBuffer();
    
private:
    
    double mSampleRate;
    
    float mPhase;
    
    float mBuffer[maxBufferSize];
};
