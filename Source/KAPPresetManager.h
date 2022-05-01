/*
  ==============================================================================

    KAPPresetManager.h
    Created: 1 May 2022 1:22:18am
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class KAPPresetManager
{
public:

    KAPPresetManager(juce::AudioProcessor* inProcessor);
    ~KAPPresetManager();
    
    void getXmlForPreset(juce::XmlElement* inElement);
    
    void loadPresetForXml(juce::XmlElement* inElement);

private:
    
    juce::XmlElement* mCurrentPresetXml;
    
    juce::AudioProcessor* mProcessor;
    
};
