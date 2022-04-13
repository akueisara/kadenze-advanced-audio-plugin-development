/*
  ==============================================================================

    KAPMainPanel.cpp
    Created: 11 Apr 2022 7:45:05pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#include "KAPMainPanel.h"

KAPMainPanel::KAPMainPanel(KadenzeAudioPluginAudioProcessor* inProcessor)
: KAPPanelBase(inProcessor)
{
    setSize(MAIN_PANEL_WIDTH,
            MAIN_PANEL_HEIGHT);
    
    mTopPanel.reset(new KAPTopPanel(inProcessor));
    mTopPanel->setTopLeftPosition(0, 0);
    addAndMakeVisible(mTopPanel.get());
}

KAPMainPanel::~KAPMainPanel()
{
    
}
