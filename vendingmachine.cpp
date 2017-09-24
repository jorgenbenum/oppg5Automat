#include "vendingmachine.h" // Includes the header file for this class for class declaration visibility.
#include <iostream>


// Definition of VendingMachine constructor.
VendingMachine::VendingMachine()
    : sodaTypes_()  // Initialization of sodaTypes_ vector. Explicit call to the constructor.
{
    std::cout << "Vending machine object constructed!" << std::endl;
}


// Will be called when the object is deleted. Could do clean-up tasks here.
VendingMachine::~VendingMachine()
{
    // Do nothing.
}


// Add a Soda to the sodaTypes_ vector by using the vector push_back() method (function).
void VendingMachine::addType(Soda s)
{
    sodaTypes_.push_back(s);
}


// Print number of registered sodaTypes (types we added to the sodaTypes_ vector).
void VendingMachine::printInventory()
{
    std::cout << "Number of soda types registered: " << sodaTypes_.size() << std::endl;
}


// Print menu function
void VendingMachine::printMenu() // kunne egentlig tatt in brus med (Soda a) og printet a.name_
{
    std::cout << "\nSoda types: \nCola \nFanta \nSprite \n"  << std::endl;
}


// Print volume of contained liquid
void VendingMachine::printLiquid(Soda a, Soda b, Soda c)
{
    float volum = a.boxSize_*a.inventory_+b.boxSize_*b.inventory_+c.boxSize_*c.inventory_;
    std::cout << "Amount of Liquid contained in the machine (liters): " << volum << std::endl;
}


// Access for service
void VendingMachine::Service()
{
    int x;
    std::cout <<"Enter service key" << std::endl;
    std::cin >> x;

    if (x == 1221)
    {
        std::cout <<"Service menu open" << std::endl;
    }
    else
    {
        std::cout <<"you are not authorized to access this area" << std::endl;
    }
}
