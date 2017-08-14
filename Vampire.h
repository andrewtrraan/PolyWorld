#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Human.h"
#include <string>

//allows for the vampire to inherit the human functions
class Vampire: public Human
{
public:


    //declaration of the consturctor
    Vampire(std::string vampireName,double taxInput, bool isVamp);
    bool isVamp;


    //decalre the object's name
    std:: string vampireName;

    //declare how much money the object has
    double taxInput;



    //declariton of the destructor
    virtual ~Vampire();

protected:

private:
     //declare function that allows for the objet to speka
    void speak();

    //declare function that outputs the obejct's unique message aboutt payign taxes
    void payTaxes();

    //declare funtion that claualtes how much tax is needed to be paid
    double taxCalc();

    //declare function that calcualtes how much money is left after paying taxes.
    double taxCalc1();

};

#endif // VAMPIRE_H
