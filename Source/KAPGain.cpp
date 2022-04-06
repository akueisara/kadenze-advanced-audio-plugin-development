/*
  ==============================================================================

    KAPGain.cpp
    Created: 6 Apr 2022 9:54:02pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#include "KAPGain.h"

KAPGain::KAPGain()
{
    
}

KAPGain::~KAPGain()
{
    
}

void KAPGain::process(float* inAudio,
                      float inGain,
                      float* outAudio,
                      int inNumSamplesToRender)
{
    for(int i = 0; i < inNumSamplesToRender; i++) {
        outAudio[i] = inAudio[i] * inGain;
    }
}
