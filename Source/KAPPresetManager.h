/*
  ==============================================================================

    KAPPresetManager.h
    Created: 1 May 2022 1:22:18am
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

#define PRESET_FILE_EXTENSION ".kpf"

class KAPPresetManager
{
public:

    KAPPresetManager(juce::AudioProcessor* inProcessor);
    ~KAPPresetManager();
    
    void getXmlForPreset(juce::XmlElement* inElement);
    
    void loadPresetForXml(juce::XmlElement* inElement);
    
    int getNumberOfPersets();
    
    juce::String getPresetName(int inPresetIndex);
    
    void createNewPreset();
    
    void savePreset();
    
    void saveAsPreset(juce::String inPresetName);
    
    void loadPreset(int inPresetIndex);
    
    bool getIsCurrentPresetSaved();
    
    juce::String getCurrentPresetName();

private:
    
    void storeLocalPreset();
    
    bool mCurrentPresetIsSaved;
    
    juce::File mCurrentlyLoadedPreset;
    
    juce::Array<juce::File> mLocalPresets;
    
    juce::String mCurrentPresetName;
    
    juce::String mPresetDirectory;
    
    juce::XmlElement* mCurrentPresetXml;
    
    juce::AudioProcessor* mProcessor;
    
};
