/*
  ==============================================================================

    KAPAudioHelpers.h
    Created: 6 Apr 2022 9:52:22pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

#define kParameterSmoothingCoeff_Generic 0.04
#define kParameterSmoothingCoeff_Fine 0.002

// The size has to be larger than delayTimeInSamples
const static int maxBufferSize = 192000;

const static double kPI = 3.14159265359;
const static double k2PI = 6.28318530718;

inline float kapLinearInterp(float v0, float v1, float t)
{
    return (1 - t) * v0 + t * v1;
}
