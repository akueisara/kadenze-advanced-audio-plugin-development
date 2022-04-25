/*
  ==============================================================================

    KAPGainPanel.cpp
    Created: 11 Apr 2022 7:45:51pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#include "KAPGainPanel.h"
#include "KAPParameters.h"
#include "KAPHelperFunctions.h"

KAPGainPanel::KAPGainPanel(KadenzeAudioPluginAudioProcessor* inProcessor)
: KAPPanelBase(inProcessor)
{
    setSize(GAIN_PANEL_WIDTH,
            GAIN_PANEL_HEIGHT);
}

KAPGainPanel::~KAPGainPanel()
{
    
}

void KAPGainPanel::paint(juce::Graphics& g)
{
    KAPPanelBase::paint(g);
    
    if (mSlider) {
        paintComponentLabel(g, mSlider.get());
    }
}

void KAPGainPanel::setParameterID(int inParameterID)
{
    mSlider.reset(new KAPParameterSlider(mProcessor->parameters, KAPParameterID[inParameterID]));
    const int sliderSize = 54;
    
    mSlider->setBounds(getWidth() * 0.5 - sliderSize * 0.5,
                       getHeight() * 0.5 - sliderSize * 0.5,
                       sliderSize,
                       sliderSize);
    
    addAndMakeVisible(mSlider.get());
}
