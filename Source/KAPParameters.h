/*
  ==============================================================================

    KAPParameters.h
    Created: 15 Apr 2022 12:08:36am
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

enum KAPParameter
{
    kParameter_InputGain = 0,
    kParameter_DelayTime,
    kParameter_DelayFeedback,
    kParameter_DelayWetDry,
    kParameter_DelayType, // chorus or delay?
    kParameter_OutputGain,
    kParameter_ModulationRate,
    kParameter_ModulationDepth,
    kParameter_TotalNumParameters,
};

static juce::String KAPParameterID [kParameter_TotalNumParameters] =
{
    "Input Gain",
    "Time",
    "Feedback",
    "Wet Dry",
    "Type",
    "Output Gain",
    "Modulation Rate",
    "Modulation Depth",
};
