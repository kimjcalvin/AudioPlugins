/*
  ==============================================================================

    RoofComponent.cpp
    Created: 9 May 2021 12:32:14pm
    Author:  Calvin

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "RoofComponent.h"

//==============================================================================
RoofComponent::RoofComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

RoofComponent::~RoofComponent()
{
}

void RoofComponent::paint (Graphics& g)
{
    g.setColour(Colours::red);
    Path p;
    p.startNewSubPath(200, 190);
    p.lineTo(400, 190);
    p.lineTo(300, 140);
    p.closeSubPath();
    p.closeSubPath();

    g.fillPath(p);
    g.strokePath(p, PathStrokeType(2.0f));
}

void RoofComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
