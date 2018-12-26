#include "Neuron.hpp"

namespace neuron
{
    Neuron::Neuron() :
        m_dependents(),
        m_bias(0),
        m_value(0)
    {

    }

    Neuron::~Neuron()
    {

    }

    float Neuron::fastSigmoid(float p_input)
    {
        return p_input / (1 + abs(p_input));
    }
}