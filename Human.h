#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include "Citizen.h"


//allows for the human to inherit the citizen functions
class Human: public Citizen
{
public:

    //declaration of the consturctor
    Human(std::string humanName, double taxInput, bool isHuman);


    //declare bool to check if humna
    bool isHuman;

    //decalre the double for amount of money the object has
    double taxInput;

    //declare the function that allows for the object to speka
    virtual void speak();

    //declare functiion that outputs the object's unique message about paying taxes
    virtual void payTaxes();

    //declare functiona that calcualtes how much tax is to be paid
    virtual double taxCalc();

    //declare function that caclualtes how much money is left after paying taxes.
    virtual double taxCalc1();
    //declare the string for the object's name
    std::string humanName;

    //declartion of the destrutor
    virtual ~Human();


protected:

private:





};

#endif // HUMAN_H
