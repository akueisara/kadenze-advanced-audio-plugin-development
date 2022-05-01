/*
  ==============================================================================

    KAPPresetManager.cpp
    Created: 1 May 2022 1:22:18am
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#include "KAPPresetManager.h"

KAPPresetManager::KAPPresetManager(juce::AudioProcessor* inProcessor)
:   mProcessor(inProcessor)
{
    
}

KAPPresetManager::~KAPPresetManager()
{
    
}

void KAPPresetManager::getXmlForPreset(juce::XmlElement* inElement)
{
    const int numParameters = mProcessor->getNumParameters();
    
    for (int i = 0; i < numParameters; i++) {
        inElement->setAttribute(mProcessor->getParameterName(i),
                                mProcessor->getParameter(i));
    }
}

void KAPPresetManager::loadPresetForXml(juce::XmlElement* inElement)
{
    mCurrentPresetXml = inElement;
    
    for (int i = 0; i < mCurrentPresetXml->getNumAttributes(); i++) {
        
        const juce::String name = mCurrentPresetXml->getAttributeName(i);
        const float value = mCurrentPresetXml->getDoubleAttribute(name);
        
        for (int j = 0; j < mProcessor->getNumParameters(); j++) {
            if (mProcessor->getParameterName(j) == name) {
                mProcessor->setParameterNotifyingHost(j, value);
            }
        }
    }
}
