/*
  ==============================================================================

    KAPGainPanel.h
    Created: 11 Apr 2022 7:45:51pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

#include "KAPPanelBase.h"
#include "KAPParameterSlider.h"

class KAPGainPanel
: public KAPPanelBase
{
public:

    KAPGainPanel(KadenzeAudioPluginAudioProcessor* inProcessor);
    ~KAPGainPanel();
    
    void paint(juce::Graphics& g) override;
    
    void setParameterID(int inParameterID);
    
private:
    
    std::unique_ptr<KAPParameterSlider> mSlider;
};
