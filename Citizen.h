#ifndef CITIZEN_H
#define CITIZEN_H


class Citizen
{
    public:
        Citizen();

        //virtual function that allows for objects to speka
        virtual void speak() =0;

        //virutal function that allows to calcualte amount of tax needed to be paid
        virtual double taxCalc() =0;

        //virtual function tha allows to calculat the money left after paying taxes
        virtual double taxCalc1()=0;

        //virutal function that allows for objet to output unique message about paying taxes
        virtual void payTaxes()=0;




        virtual ~Citizen();

    protected:

    private:
};

#endif // CITIZEN_H
