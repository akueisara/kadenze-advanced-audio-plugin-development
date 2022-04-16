/*
  ==============================================================================

    KAPParameterSlider.cpp
    Created: 16 Apr 2022 6:10:56pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#include "KAPParameterSlider.h"

KAPParameterSlider::KAPParameterSlider(juce::AudioProcessorValueTreeState& stateToControl,
                                       const juce::String& parameterID)
:   juce::Slider(parameterID)
{
    setSliderStyle(SliderStyle::RotaryHorizontalVerticalDrag);
    setTextBoxStyle(Slider::TextEntryBoxPosition::TextBoxBelow, false, 0, 0);
    
    setRange(0.0f, 1.0f, 0.001f);
    
    mAttachment.reset(new juce::AudioProcessorValueTreeState::SliderAttachment(stateToControl, parameterID, *this));
}

KAPParameterSlider::~KAPParameterSlider()
{
    
}
