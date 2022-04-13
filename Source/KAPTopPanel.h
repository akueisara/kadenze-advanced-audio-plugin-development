/*
  ==============================================================================

    KAPTopPanel.h
    Created: 11 Apr 2022 7:46:06pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

#include "KAPPanelBase.h"

class KAPTopPanel
: public KAPPanelBase
{
public:

    KAPTopPanel(KadenzeAudioPluginAudioProcessor* inProcessor);
    ~KAPTopPanel();
    
    void paint(juce::Graphics& g) override;
    
private:
    
};
