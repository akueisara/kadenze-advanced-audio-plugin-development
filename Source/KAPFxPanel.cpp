/*
  ==============================================================================

    KAPFxPanel.cpp
    Created: 11 Apr 2022 7:45:42pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#include "KAPFxPanel.h"
#include "KAPHelperFunctions.h"

KAPFxPanel::KAPFxPanel(KadenzeAudioPluginAudioProcessor* inProcessor)
:   KAPPanelBase(inProcessor)
{
    setSize(FX_PANEL_WIDTH,
            FX_PANEL_HEIGHT);
    
    setFxPanelStyle(kKAPFxPanelStyle_Chorus);
}

KAPFxPanel::~KAPFxPanel()
{
    
}

void KAPFxPanel::paint(juce::Graphics& g)
{
    KAPPanelBase::paint(g);
    
    switch (mStyle)
    {
        case(kKAPFxPanelStyle_Delay): {
            
            g.drawFittedText("DELAY", 0, 0, getWidth(), getHeight() * 0.75, juce::Justification::centred, 1);
        } break;
            
        case(kKAPFxPanelStyle_Chorus): {
            
            g.drawFittedText("CHORUS", 0, 0, getWidth(), getHeight() * 0.75, juce::Justification::centred, 1);
        } break;
            
        case(kKAPFxPanelStyle_TotalNumStyles): {
            
            // this shouldn't happen!
            g.drawFittedText("no no no", 0, 0, getWidth(), getHeight(), juce::Justification::centred, 1);
            jassertfalse;
        } break;
    }
    
    // paint labels
    for(int i = 0; i < mSliders.size(); i++) {
        paintComponentLabel(g, mSliders[i]);
    }
}

void KAPFxPanel::setFxPanelStyle(KAPFxPanelStyle inStyle)
{
    mStyle = inStyle;
    
    mSliders.clear();
    
    const int sliderSize = 56;
    int x = 130;
    int y = getHeight() * 0.5 - sliderSize * 0.5;
    
    switch (mStyle)
    {
        case(kKAPFxPanelStyle_Delay): {
            
            createKAPParameterSlider(this, mProcessor, mSliders, kParameter_DelayTime, x, y, sliderSize);
            x += sliderSize * 2;
            
            createKAPParameterSlider(this, mProcessor, mSliders, kParameter_DelayFeedback, x, y, sliderSize);
            x += sliderSize * 2;
            
            createKAPParameterSlider(this, mProcessor, mSliders, kParameter_DelayWetDry, x, y, sliderSize);
            
        } break;
            
        case(kKAPFxPanelStyle_Chorus): {
            
            createKAPParameterSlider(this, mProcessor, mSliders, kParameter_ModulationRate, x, y, sliderSize);
            x += sliderSize * 2;
            
            createKAPParameterSlider(this, mProcessor, mSliders, kParameter_ModulationDepth, x, y, sliderSize);
            x += sliderSize * 2;
            
            createKAPParameterSlider(this, mProcessor, mSliders, kParameter_DelayWetDry, x, y, sliderSize);
            
        } break;
            
        case(kKAPFxPanelStyle_TotalNumStyles): {
            
            // this shouldn't happen!
            jassertfalse;
        } break;
            
    }
}

void KAPFxPanel::createKAPParameterSlider(juce::Component* component,
                              KadenzeAudioPluginAudioProcessor* processor,
                              juce::OwnedArray<KAPParameterSlider>& sliders,
                              KAPParameter kParameter,
                              int x,
                              int y,
                              int sliderSize)
{
    KAPParameterSlider* slider = new KAPParameterSlider(processor->parameters, KAPParameterID[kParameter]);
    slider->setBounds(x, y, sliderSize, sliderSize);
    component->addAndMakeVisible(slider);
    sliders.add(slider);
}
