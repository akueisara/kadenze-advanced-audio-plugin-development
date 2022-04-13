/*
  ==============================================================================

    KAPPanelBase.h
    Created: 11 Apr 2022 7:44:55pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"
#include "PluginProcessor.h"
#include "KAPInterfaceDefines.h"

class KAPPanelBase
: public juce::Component
{
public:

    KAPPanelBase(KadenzeAudioPluginAudioProcessor* inProcessor);
    ~KAPPanelBase();
    
    void paint (juce::Graphics& g) override;
protected:
    
    KadenzeAudioPluginAudioProcessor* mProcessor;
};
