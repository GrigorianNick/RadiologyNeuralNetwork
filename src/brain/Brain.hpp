#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "neuron/Neuron.hpp"

namespace brain
{
    class Brain
    {
    public:
        Brain();
        ~Brain();

    private:
        std::map< int, neuron::Neuron > m_inputNeurons;

        std::map< int, neuron::Neuron > m_outputNeurons;
    };
}

#endif //BRAIN_HPP