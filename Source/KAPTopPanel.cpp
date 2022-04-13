/*
  ==============================================================================

    KAPTopPanel.cpp
    Created: 11 Apr 2022 7:46:06pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#include "KAPTopPanel.h"

KAPTopPanel::KAPTopPanel(KadenzeAudioPluginAudioProcessor* inProcessor)
: KAPPanelBase(inProcessor)
{
    setSize(TOP_PANEL_WIDTH,
            TOP_PANEL_HEIGHT);
}

KAPTopPanel::~KAPTopPanel()
{
    
}

void KAPTopPanel::paint(juce::Graphics& g)
{
    KAPPanelBase::paint(g);
    
    g.drawFittedText("KADENZE AUDIO PLUGIN", 0, 0, getWidth() - 10, getHeight(), juce::Justification::centredRight, 1);
}
