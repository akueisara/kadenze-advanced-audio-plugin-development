/*
  ==============================================================================

    KAPCenterPanelMenuBar.cpp
    Created: 11 Apr 2022 7:45:31pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#include "KAPCenterPanelMenuBar.h"
#include "KAPParameters.h"

KAPCenterPanelMenuBar::KAPCenterPanelMenuBar(KadenzeAudioPluginAudioProcessor* inProcessor)
: KAPPanelBase(inProcessor)
{
    setSize(CENTER_PANEL_MENU_BAR_WIDTH,
            CENTER_PANEL_MENU_BAR_HEIGHT);
    
    const int width = 85;
    
    mFxTypeComboBox.reset(new KAPParameterComboBox(mProcessor->parameters, KAPParameterID[kParameter_DelayTime]));
    mFxTypeComboBox->setBounds(getWidth() - width, 0, width, getHeight());
    mFxTypeComboBox->addItem("DELAY", 1);
    mFxTypeComboBox->addItem("CHORUS", 2);
    mFxTypeComboBox->setSelectedItemIndex(0, juce::dontSendNotification);
    addAndMakeVisible(mFxTypeComboBox.get());
}

KAPCenterPanelMenuBar::~KAPCenterPanelMenuBar()
{
    
}

void KAPCenterPanelMenuBar::addFxTypeComboBoxListener(juce::ComboBox::Listener* inListener)
{
    mFxTypeComboBox->addListener(inListener);
}

void KAPCenterPanelMenuBar::removeFxTypeComboBoxListener(juce::ComboBox::Listener* inListener)
{
    mFxTypeComboBox->removeListener(inListener);
}
