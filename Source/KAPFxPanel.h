/*
  ==============================================================================

    KAPFxPanel.h
    Created: 11 Apr 2022 7:45:42pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

#include "KAPPanelBase.h"

#include "KAPParameters.h"
#include "KAPParameterSlider.h"

enum KAPFxPanelStyle
{
    kKAPFxPanelStyle_Delay,
    kKAPFxPanelStyle_Chorus,
    kKAPFxPanelStyle_TotalNumStyles
};

class KAPFxPanel
:   public KAPPanelBase,
    public juce::ComboBox::Listener
{
public:

    KAPFxPanel(KadenzeAudioPluginAudioProcessor* inProcessor);
    ~KAPFxPanel();
    
    void paint(juce::Graphics& g) override;
    
    void setFxPanelStyle(KAPFxPanelStyle inStyle);
    
    void comboBoxChanged (juce::ComboBox* comboBoxThatHasChanged) override;
    
private:
    
    KAPFxPanelStyle mStyle;
    
    juce::OwnedArray<KAPParameterSlider> mSliders;
    
    void createKAPParameterSlider(juce::Component* component,
                                  KadenzeAudioPluginAudioProcessor* processor,
                                  juce::OwnedArray<KAPParameterSlider>& sliders,
                                  KAPParameter kParameter,
                                  int x,
                                  int y,
                                  int sliderSize);
};
