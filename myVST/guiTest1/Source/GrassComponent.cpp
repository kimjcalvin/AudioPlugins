/*
  ==============================================================================

    GrassComponent.cpp
    Created: 9 May 2021 12:22:26pm
    Author:  Calvin

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "GrassComponent.h"

//==============================================================================
GrassComponent::GrassComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

GrassComponent::~GrassComponent()
{
}

void GrassComponent::paint (Graphics& g)
{
    g.setColour(Colours::green);
    g.drawLine(10, 325, getWidth() - 10, 325, 10.0);

}

void GrassComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
