#include "aquila/aquila.h"

int main()
{
    const std::size_t SIZE = 64;										// the parameters to measure
    const Aquila::FrequencyType sampleFreq = 2000, f1 = 125, f2 = 700;

    Aquila::SineGenerator sine1(sampleFreq);
    sine1.setAmplitude(32).setFrequency(f1).generate(SIZE);
    Aquila::SineGenerator sine2(sampleFreq);
    sine2.setAmplitude(8).setFrequency(f2).setPhase(0.75).generate(SIZE);
    auto sum = sine1 + sine2;

    Aquila::TextPlot plot("Input signal");
    plot.plot(sum);

    auto fft = Aquila::FftFactory::getFft(SIZE);				// supposedly to calculate the fast Fourier transform algorithm
    Aquila::SpectrumType spectrum = fft->fft(sum.toArray());

    plot.setTitle("Spectrum");
    plot.plotSpectrum(spectrum);

    return 0;
}
