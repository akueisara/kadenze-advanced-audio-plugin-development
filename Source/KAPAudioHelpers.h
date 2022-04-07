/*
  ==============================================================================

    KAPAudioHelpers.h
    Created: 6 Apr 2022 9:52:22pm
    Author:  Kuei Jung Hu

  ==============================================================================
*/

#pragma once

inline float kapLinearInterp(float v0, float v1, float t)
{
    return (1 - t) * v0 + t * v1;
}
