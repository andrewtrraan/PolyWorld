#ifndef NOBBS_H
#define NOBBS_H

#include<string>
//#include "Citizen.h"
#include "Human.h"

//allows for the nobbs to inherit the citizen functions
class Nobbs: public Human
{
public:


    //declare the consturctor
    Nobbs(std::string nobbsName,double taxInput, bool isNobbs);
    bool isNobbs;

       //decalre the double forthe amount of money the object has
    double taxInput;

    //declare the string for the object's name
    std::string nobbsName;





    //declare the destructor
    virtual ~Nobbs();

protected:

private:
        //decalre function that allows for the object to speka
    void speak();


    //declare function that outputs the object's unique message about paying taxes
    void payTaxes();

    //declarefunction that calculates how much tax is nedded to be paid
    double taxCalc();

    //decalre function that calculates how much money is left after paying taxes.
    double taxCalc1();



};

#endif // NOBBS_H
