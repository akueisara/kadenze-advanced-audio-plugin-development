/*
  ==============================================================================

    KAPMainPanel.h
    Created: 11 Apr 2022 7:45:05pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

#include "KAPPanelBase.h"

#include "KAPTopPanel.h"

class KAPMainPanel
: public KAPPanelBase
{
public:

    KAPMainPanel(KadenzeAudioPluginAudioProcessor* inProcessor);
    ~KAPMainPanel();
    
private:
    
    std::unique_ptr<KAPTopPanel> mTopPanel;
};
