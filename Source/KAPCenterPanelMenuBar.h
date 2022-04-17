/*
  ==============================================================================

    KAPCenterPanelMenuBar.h
    Created: 11 Apr 2022 7:45:31pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

#include "KAPPanelBase.h"
#include "KAPParameterComboBox.h"

class KAPCenterPanelMenuBar
: public KAPPanelBase
{
public:

    KAPCenterPanelMenuBar(KadenzeAudioPluginAudioProcessor* inProcessor);
    ~KAPCenterPanelMenuBar();
    
    void addFxTypeComboBoxListener(juce::ComboBox::Listener* inListener);
    
    void removeFxTypeComboBoxListener(juce::ComboBox::Listener* inListener);
    
private:
    
    std::unique_ptr<KAPParameterComboBox> mFxTypeComboBox;
};
