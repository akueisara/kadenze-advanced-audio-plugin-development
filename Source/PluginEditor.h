/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

#include "KAPMainPanel.h"

//==============================================================================
/**
*/
class KadenzeAudioPluginAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    KadenzeAudioPluginAudioProcessorEditor (KadenzeAudioPluginAudioProcessor&);
    ~KadenzeAudioPluginAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    KadenzeAudioPluginAudioProcessor& audioProcessor;
    
    std::unique_ptr<KAPMainPanel> mMainPanel;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KadenzeAudioPluginAudioProcessorEditor)
};
