#ifndef WEREWOLF_H
#define WEREWOLF_H
#include "Wolf.h"
#include "Citizen.h"
#include <string>


//allows for werewolf to inheirt the citizen and wolf functions
class Werewolf:public Wolf,public Citizen
{
public:
    //consturctor declaration
    Werewolf(std:: string werewolfName, double taxInput, bool isWerewolf);

    //boolean used to make sure only one consurctor messsage will be outputted
    bool isWerewolf;


    //declare the desturctor
    virtual ~Werewolf();

protected:

private:

    //the object's name
    std:: string werewolfName;

    //the function that allows the object to growl
    void growl();

    //function that allows for the object to howl
    void howl();

    //function that allows for the object to speka
    void speak();

    //function that outputs the object's unique message about paying taxes
    void payTaxes();

    //function that calcualtes how much tax is needed to be paid
    double  taxCalc();


    //function that calcualtes how much money is left after paying taxes
    double taxCalc1();

    //how much money the object has
    double taxInput;


};

#endif // WEREWOLF_H
