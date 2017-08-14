#ifndef DWARF_H
#define DWARF_H

#include "Citizen.h"
#include <iostream>
#include <cstdlib>

//allows for the dwarf to inheirt the citizen functions
class Dwarf: public Citizen
{
public:


    //consructor declaratiion
    Dwarf(std::string dwarfName, double taxInput);



    virtual ~Dwarf();

protected:

private:

    //decalre the double forthe money the object has
    double taxInput;

    //declare the string for the object's name
    std::string dwarfName;


    //decalre the speak function of the object
    void speak();

    //declare function that ouputs unique message of object paying taxes
    void payTaxes();

    //decalre function that calcualte how much tax needs to be paid
    double taxCalc();

    //decalre function that calcualtes how much money is left after paying taxes
    double taxCalc1();


};

#endif // DWARF_H
