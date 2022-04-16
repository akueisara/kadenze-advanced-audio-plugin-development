/*
  ==============================================================================

    KAPParameterSlider.h
    Created: 16 Apr 2022 6:10:56pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class KAPParameterSlider
: public juce::Slider
{
public:
    
    KAPParameterSlider(juce::AudioProcessorValueTreeState& stateToControl,
                       const juce::String& parameterID);
    
    ~KAPParameterSlider();
    
private:
    
    std::unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment> mAttachment;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(KAPParameterSlider);
};
