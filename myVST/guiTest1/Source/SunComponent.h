/*
  ==============================================================================

    SunComponent.h
    Created: 9 May 2021 12:42:36pm
    Author:  Calvin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class SunComponent    : public Component
{
public:
    SunComponent();
    ~SunComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SunComponent)
};
