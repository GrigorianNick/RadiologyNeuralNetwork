#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "neuron/Neuron.hpp"

namespace brain
{
    class Brain
    {
    public:
        Brain(int p_numInputs, int p_numOutputs, int p_numLayers, int p_numNeuronsPerLayer);
        ~Brain();

    private:
        std::map< int, boost::shared_ptr<neuron::Neuron> > m_inputNeurons;

        std::map< int, boost::shared_ptr<neuron::Neuron> > m_outputNeurons;
    };
}

#endif //BRAIN_HPP