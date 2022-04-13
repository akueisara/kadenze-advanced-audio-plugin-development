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
    
    mInputGainPanel.reset(new KAPGainPanel(inProcessor));
    mInputGainPanel->setTopLeftPosition(0, TOP_PANEL_HEIGHT);
    addAndMakeVisible(mInputGainPanel.get());
    
    mOutputGainPanel.reset(new KAPGainPanel(inProcessor));
    mOutputGainPanel->setTopLeftPosition(MAIN_PANEL_WIDTH - GAIN_PANEL_WIDTH, TOP_PANEL_HEIGHT);
    addAndMakeVisible(mOutputGainPanel.get());
    
    mCenterPanel.reset(new KAPCenterPanel(inProcessor));
    mCenterPanel->setTopLeftPosition(GAIN_PANEL_WIDTH, TOP_PANEL_HEIGHT);
    addAndMakeVisible(mCenterPanel.get());
}

KAPMainPanel::~KAPMainPanel()
{
    
}
