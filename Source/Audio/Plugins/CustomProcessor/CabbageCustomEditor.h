#pragma once

#include "CabbageCustomProcessor.h"

//==============================================================================
class CabbageCustomEditor  : public juce::AudioProcessorEditor
{
public:
    explicit CabbageCustomEditor (CabbageCustomProcessor&);
    ~CabbageCustomEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    CabbageCustomProcessor& processorRef;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CabbageCustomEditor)
};
