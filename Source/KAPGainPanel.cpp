/*
  ==============================================================================

    KAPGainPanel.cpp
    Created: 11 Apr 2022 7:45:51pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#include "KAPGainPanel.h"

KAPGainPanel::KAPGainPanel(KadenzeAudioPluginAudioProcessor* inProcessor)
: KAPPanelBase(inProcessor)
{
    setSize(GAIN_PANEL_WIDTH,
            GAIN_PANEL_HEIGHT);
}

KAPGainPanel::~KAPGainPanel()
{
    
}
