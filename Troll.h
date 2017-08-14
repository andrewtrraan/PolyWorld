#ifndef TROLL_H
#define TROLL_H

#include <string>
#include "Citizen.h"


//allows for the troll to inherit the citizen functions
class Troll: public Citizen
{
public:
    //declare the consturctor
    Troll(std:: string trollName,double taxInput);

    //declare the destructor
    virtual ~Troll();

protected:

private:

    //decalre the string object's name
    std::string trollName;


    //decalre the doubel forhow much money the object has
    double taxInput;

    //decalre function that allows for the object to speka
    void speak();

    //declare function that ouputs the objecft's unique message about paying taxes
    void payTaxes();

    //declare function that calcualtes how much tax is neddded to be paid
    double taxCalc();

    // declare function that calucaltes how much money is left after paying taxes
    double taxCalc1();
};

#endif // TROLL_H
