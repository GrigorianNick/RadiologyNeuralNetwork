#include "brain/Brain.hpp"

namespace brain
{
    Brain::Brain(int p_numInputs, int p_numOutputs, int p_numLayers, int p_numNeuronsPerLayer):
        m_inputNeurons(),
        m_outputNeurons()
    {
        // Set up our input and output neurons
        for (int i = 0; i < p_numInputs; i++)
        {
            m_inputNeurons.insert(std::make_pair(i, boost::shared_ptr<neuron::Neuron>(new neuron::Neuron())));
        }
        for (int i = 0; i < p_numOutputs; i++)
        {
            m_outputNeurons.insert(std::make_pair(i, boost::shared_ptr<neuron::Neuron>(new neuron::Neuron)));
        }

        // Fill out our hidden layers
        for (int layer = 0; layer < p_numLayers - 1; layer++)
        {
            for (int neuronNum = 0; neuronNum < p_numNeuronsPerLayer; neuronNum++)
            {
                
            }
        }
    }

    Brain::~Brain()
    {

    }
}