/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
GainSliderAudioProcessorEditor::GainSliderAudioProcessorEditor (GainSliderAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
    masterGainSlider.setSliderStyle (juce::Slider::LinearBarVertical);
    
    float minSliderVal = -48.0f; // consider Macro?
    float maxSliderVal = 0.0f;
    float midSliderVal = (minSliderVal + maxSliderVal) / 2;

    masterGainSlider.setRange (minSliderVal, maxSliderVal);
    masterGainSlider.setValue (midSliderVal);
    
    masterGainSlider.addListener(this);


    addAndMakeVisible(masterGainSlider); 

}

GainSliderAudioProcessorEditor::~GainSliderAudioProcessorEditor()
{
}

//==============================================================================
void GainSliderAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    
}

void GainSliderAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..

    masterGainSlider.setBounds (getWidth() / 2 - 25, getHeight() / 2 - 100, 50, 200);
}

void GainSliderAudioProcessorEditor::sliderValueChanged(juce::Slider* slider)
{
    if (slider == &masterGainSlider)
    {
        audioProcessor.valVolumeAdjust = pow (10, masterGainSlider.getValue() / 20);
    }


}