/*
  ==============================================================================

    KAPParameterComboBox.cpp
    Created: 16 Apr 2022 6:11:06pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#include "KAPParameterComboBox.h"

KAPParameterComboBox::KAPParameterComboBox(juce::AudioProcessorValueTreeState& stateToControl,
                   const juce::String& parameterID)
:   juce::ComboBox(parameterID)
{
    mAttachment.reset(new juce::AudioProcessorValueTreeState::ComboBoxAttachment(stateToControl, parameterID, *this));
}

KAPParameterComboBox::~KAPParameterComboBox()
{
    
}
