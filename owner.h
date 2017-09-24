#ifndef OWNER_H
#define OWNER_H

#include <string>



// Owner class decraration. See .cpp file with same name for definition / implementation.

class Owner
{

public:
    // Declare private constructor with one string parameter.
    Owner(std::string ownersName);


private:
    // Declare private variable
    std::string ownersName_;


};

#endif // OWNER_H
