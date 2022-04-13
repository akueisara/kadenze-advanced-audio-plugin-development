/*
  ==============================================================================

    KAPPanelBase.cpp
    Created: 11 Apr 2022 7:44:55pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#include "KAPPanelBase.h"

KAPPanelBase::KAPPanelBase(KadenzeAudioPluginAudioProcessor* inProcessor)
: mProcessor(inProcessor)
{
    
}

KAPPanelBase::~KAPPanelBase()
{
    
}

void KAPPanelBase::paint(juce::Graphics& g)
{
    g.setColour(juce::Colours::white);
    g.fillAll();
    
    g.setColour(juce::Colours::black);
    g.drawRect(0, 0, getWidth(), getHeight());
}
