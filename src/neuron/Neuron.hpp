#ifndef NEURON_HPP
#define NEURON_HPP

#include <boost/cstdint.hpp>
#include <boost/shared_ptr.hpp>
#include <map>

namespace neuron
{
    class Neuron
    {
    public:
        Neuron();
        ~Neuron();

        /*!
            Adds a neuron as a dependent. Does not perform any sanity checks
            for circular routes.

            /param[in] p_neuron The neuron we will be looking at from now on.
        */
        void addNeuron(boost::shared_ptr<Neuron> p_neuron);

    private:

        /*!
            A faster approximation of a sigmoid function.

            /param[in] p_input The number that we're squishing.
            /return The squished value, ranging from -1 to 1.
        */
        float fastSigmoid(float p_input);

        /*!
            Generates a random double.

            /return A random double.
        */
        double getRandomDouble();

    private:

        //! Each neuron paired with their bias
        std::map< boost::shared_ptr<Neuron>, double > m_dependents;

        //! The bias
        double m_bias;

        //! The value of this particular neuron
        double m_value;
    };
}

#endif //NEURON_HPP