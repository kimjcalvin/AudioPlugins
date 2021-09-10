/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);
    dial1.setSliderStyle(Slider::SliderStyle::Rotary);
    addAndMakeVisible(dial1);
}

MainComponent::~MainComponent()
{
    

}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    g.fillAll(Colours::aquamarine);
}

void MainComponent::resized()
{
    dial1.setBounds(getLocalBounds());
}
