#include "Neuron.hpp"

#include <limits>
#include <random>

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

    double Neuron::getRandomDouble()
    {
        //TODO: Make these member variables when we optimize.
        std::default_random_engine generator;
        std::uniform_real_distribution<double> distribution(-std::numeric_limits<double>::max(), std::numeric_limits<double>::max());
        return distribution(generator);
    }

    void Neuron::addNeuron(boost::shared_ptr<Neuron> p_neuron)
    {
        m_dependents.insert(std::make_pair(p_neuron, getRandomDouble()));
    }
}