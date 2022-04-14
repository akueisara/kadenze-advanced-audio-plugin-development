/*
  ==============================================================================

    KAPCenterPanel.h
    Created: 11 Apr 2022 7:45:16pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

#include "KAPPanelBase.h"

#include "KAPCenterPanelMenuBar.h"
#include "KAPFxPanel.h"

class KAPCenterPanel
: public KAPPanelBase
{
public:

    KAPCenterPanel(KadenzeAudioPluginAudioProcessor* inProcessor);
    ~KAPCenterPanel();
    
private:
    
    std::unique_ptr<KAPCenterPanelMenuBar> mMenuBar;
    std::unique_ptr<KAPFxPanel> mFxPanel;
};
