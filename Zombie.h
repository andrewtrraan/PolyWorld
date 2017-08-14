#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
//#include "Citizen.h"
#include "Human.h"

//allow the zombie to inherit the citizen functions
class Zombie: public Human
{
    public:

        //consturcor declaration
        Zombie(std:: string zombieName,double taxInput, bool isZombie);


        //declare bool to check if it is a zombie
        bool isZombie;

          //decalre the string for the object's name
        std::string zombieName;

        //the money that the object has
        double taxInput;
        //desturcotr declation
        virtual ~Zombie();

    protected:

    private:
        //declare function that allows for objet to speak
        void speak();

        //delare fucntion that allows for object to output unique message about paying taxes
        void payTaxes();

        //decalre function that calcualts how much tax is needed to be paid
        double taxCalc();

        //declare function that allows to calcualte the amount of money left after paying taxes
        double taxCalc1();


};

#endif // ZOMBIE_H
