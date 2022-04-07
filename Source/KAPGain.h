/*
  ==============================================================================

    KAPGain.h
    Created: 6 Apr 2022 9:53:55pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

class KAPGain
{
public:
    
    KAPGain();
    ~KAPGain();
    
    void process(float* inAudio,
                 float inGain,
                 float* outAudio,
                 int inNumSamplesToRender);
    
private:
};
