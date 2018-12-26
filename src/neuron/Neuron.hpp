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

    private:

        /*!
            A faster approximation of a sigmoid function.

            /param[in] p_input The number that we're squishing.
            /return The squished value, ranging from -1 to 1.
        */
        float fastSigmoid(float p_input);

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