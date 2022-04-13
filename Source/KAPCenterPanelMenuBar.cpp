/*
  ==============================================================================

    KAPCenterPanelMenuBar.cpp
    Created: 11 Apr 2022 7:45:31pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#include "KAPCenterPanelMenuBar.h"

KAPCenterPanelMenuBar::KAPCenterPanelMenuBar(KadenzeAudioPluginAudioProcessor* inProcessor)
: KAPPanelBase(inProcessor)
{
    setSize(CENTER_PANEL_MENU_BAR_WIDTH,
            CENTER_PANEL_MENU_BAR_HEIGHT);
}

KAPCenterPanelMenuBar::~KAPCenterPanelMenuBar()
{
    
}
