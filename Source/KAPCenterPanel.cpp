/*
  ==============================================================================

    KAPCenterPanel.cpp
    Created: 11 Apr 2022 7:45:16pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#include "KAPCenterPanel.h"

KAPCenterPanel::KAPCenterPanel(KadenzeAudioPluginAudioProcessor* inProcessor)
: KAPPanelBase(inProcessor)
{
    setSize(CENTER_PANEL_WIDTH,
            CENTER_PANEL_HEIGHT);
    
    mMenuBar.reset(new KAPCenterPanelMenuBar(inProcessor));
    mMenuBar->setTopLeftPosition(0, 0);
    addAndMakeVisible(mMenuBar.get());
    
    mFxPanel.reset(new KAPFxPanel(inProcessor));
    mFxPanel->setTopLeftPosition(0, CENTER_PANEL_MENU_BAR_HEIGHT);
    addAndMakeVisible(mFxPanel.get());
    
    mMenuBar->addFxTypeComboBoxListener(mFxPanel.get());
}

KAPCenterPanel::~KAPCenterPanel()
{
    mMenuBar->removeFxTypeComboBoxListener(mFxPanel.get());
}
