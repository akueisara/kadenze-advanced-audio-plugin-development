/*
  ==============================================================================

    KAPParameterComboBox.h
    Created: 16 Apr 2022 6:11:06pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class KAPParameterComboBox
: public juce::ComboBox
{
public:
    
    KAPParameterComboBox(juce::AudioProcessorValueTreeState& stateToControl,
                       const juce::String& parameterID);
    ~KAPParameterComboBox();
    
private:
    
    std::unique_ptr<juce::AudioProcessorValueTreeState::ComboBoxAttachment> mAttachment;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(KAPParameterComboBox);
};
