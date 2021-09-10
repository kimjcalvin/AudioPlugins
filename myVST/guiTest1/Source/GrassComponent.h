/*
  ==============================================================================

    GrassComponent.h
    Created: 9 May 2021 12:22:26pm
    Author:  Calvin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class GrassComponent    : public Component
{
public:
    GrassComponent();
    ~GrassComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GrassComponent)
};
