#ifndef SODA_H
#define SODA_H

#include <string>

// Soda class declaration. See .cpp file with same name for definition / implementation.
class Soda
{
public:

    // Declare public visible constructor with four parameters.
    Soda(std::string name, unsigned int price, unsigned int inventory, float boxSize);

    // Declare public visible variables.
    std::string name_;
    unsigned int price_;
    unsigned int inventory_;
    float boxSize_;

};

#endif // SODA_H
