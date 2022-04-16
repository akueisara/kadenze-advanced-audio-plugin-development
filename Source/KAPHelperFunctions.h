/*
  ==============================================================================

    KAPHelperFunctions.h
    Created: 16 Apr 2022 11:07:02pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

inline void paintComponentLabel(juce::Graphics& g, juce::Component* inComponent)
{
    const int x = inComponent->getX() - inComponent->getWidth() * 0.25f;
    const int y = inComponent->getY() + inComponent->getHeight();
    const int w = inComponent->getWidth() * 1.5f;
    const int h = 20;
    
    const juce::String label = inComponent->getName();
    
    g.setColour(juce::Colours::darkgrey);
    g.drawFittedText(label, x, y, w, h, juce::Justification::centred, 1);
}
