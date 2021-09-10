/*
  ==============================================================================

    WallComponent.cpp
    Created: 9 May 2021 11:56:50am
    Author:  Calvin

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "WallComponent.h"

//==============================================================================
WallComponent::WallComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

WallComponent::~WallComponent()
{
}

void WallComponent::paint (Graphics& g)
{
    Rectangle <float> wall(200,200, 200, 120);
    g.fillCheckerBoard(wall, 20, 10, Colours::sandybrown, Colours::saddlebrown);
    g.drawRect(wall);



}

void WallComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

    

}
