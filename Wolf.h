#ifndef WOLF_H
#define WOLF_H
#include <string>

class Wolf
{
    public:
        //Wolf();
//            //virutal function for objects to growl
//            virtual void howl() =0;
//
//
//            //virtual functions for objects to howl
//            virtual void growl()=0;

            virtual void growl();
            virtual void howl();
            bool isWolf;
            std::string wolfName;
            Wolf(std::string wolfName, bool isWolf);




        virtual ~Wolf();

    protected:

    private:
};

#endif // WOLF_H
