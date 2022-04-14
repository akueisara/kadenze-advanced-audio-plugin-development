/*
  ==============================================================================

    KAPFxPanel.h
    Created: 11 Apr 2022 7:45:42pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

#include "KAPPanelBase.h"

enum KAPFxPanelStyle
{
    kKAPFxPanelStyle_Delay,
    kKAPFxPanelStyle_Chorus,
    kKAPFxPanelStyle_TotalNumStyles
};

class KAPFxPanel
: public KAPPanelBase
{
public:

    KAPFxPanel(KadenzeAudioPluginAudioProcessor* inProcessor);
    ~KAPFxPanel();
    
    void paint(juce::Graphics& g) override;
    
    void setFxPanelStyle(KAPFxPanelStyle inStyle);
    
private:
    
    KAPFxPanelStyle mStyle;
};
