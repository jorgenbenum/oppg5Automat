#include "owner.h"
#include <iostream>




// Definition of Owner constructor. Use the initializer to initialize the variable.
Owner::Owner(std::string ownersName)
    : ownersName_ (ownersName)      // stores owner's name in private variable
{
    std::cout << "\n Machine owner: " << ownersName << "\n" << std::endl; // printes out owners name
}
