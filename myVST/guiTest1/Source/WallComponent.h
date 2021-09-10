/*
  ==============================================================================

    WallComponent.h
    Created: 9 May 2021 11:56:50am
    Author:  Calvin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class WallComponent    : public Component
{
public:
    WallComponent();
    ~WallComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (WallComponent)
};
