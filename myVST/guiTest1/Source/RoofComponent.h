/*
  ==============================================================================

    RoofComponent.h
    Created: 9 May 2021 12:32:14pm
    Author:  Calvin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class RoofComponent    : public Component
{
public:
    RoofComponent();
    ~RoofComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RoofComponent)
};
