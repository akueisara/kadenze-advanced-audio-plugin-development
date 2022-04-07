/*
  ==============================================================================

    KAPGain.cpp
    Created: 6 Apr 2022 9:54:02pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#include "KAPGain.h"

#include <JuceHeader.h>

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
    float gainMapped = juce::jmap(inGain, 0.0f, 1.0f, -24.0f, 24.0f);
    gainMapped = juce::Decibels::decibelsToGain(gainMapped, -24.0f);
    
    for(int i = 0; i < inNumSamplesToRender; i++) {
        outAudio[i] = inAudio[i] * gainMapped;
    }
}
