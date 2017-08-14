#include <iostream>
#include <cstdlib>
#include <vector>
#include <windows.h>


#include "Citizen.h"
#include "Human.h"
#include "Dwarf.h"
#include "Troll.h"
#include "Nobbs.h"
#include "Zombie.h"
#include "Vampire.h"
#include "Wolf.h"
#include "Werewolf.h"
/*
Andrew Tran
Unit 6: Inheritance and Polymorphism
ICS4U
Mr. Trink
Description: a hierarchy of citizens that inherit functions from a base class.
Another derived class that inherits from both the citizen and wolf base class.
Citizens can pay taxes and speak.
Werewolves can howl and growl from the wolf base class and speak and pay taxes from the citizen base class.
*/
using namespace std;



int main()
{

    //humans pay 15% tax
    //trolls pay 10% gems
    //dwarfs pay 5% gold
    //gem to $ = 1 gem to $1.50
    //gold to $ = 1 gold to $1.75

    //vector arrays for each of the citizens, wolf and werewolves
    vector <Citizen*>myPopulation;
    vector<Wolf*>myWolf;
    vector<Human*>myHuman;
    vector<Dwarf*>myDwarf;
    vector<Troll*>myTroll;
    vector<Nobbs*>myNobbs;
    vector<Zombie*>myZombies;
    vector<Vampire*>myVampires;
    vector<Werewolf*>myWerewolf;


    //create the objects
   // myPopulation.push_back(new Human("tyrone",1000,true));
//    myPopulation.push_back(new Human("tyrone",1000));
//    myPopulation.push_back(new Dwarf("angus",1000));
//    myPopulation.push_back(new Troll("anus",1000));
    //myPopulation.push_back(new Nobbs("joe",1000,false));
  //  myPopulation.push_back(new Zombie("home",1000,false));
    //myPopulation.push_back(new Vampire("vamp",1000,false));
//    myWolf.push_back(new Werewolf("tyrone",0,true));
//    myPopulation.push_back(new Werewolf("tyrone",1000,true));
//
    myWolf.push_back(new Wolf("wolf",false));



    //opening message
    //red
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    cout<<"\nWelcome to the Walmart planet hierarchy! In this hierarchy there are humans, trolls, and dwarfs who are the children of citiznes "<<
        "vampires, zombies and nobbs who are the children of humans"<<
        "and werewolves who are the children of wolves"<<endl;
    cout<<"The citizens can speak and pay taxes while the werewolves can howl and growl, and even speak and pay taxes!"<<endl;
    cout<<"The werewolves came from America and mutated from the wolves from radioactive pineapples."<<endl;
    cout<<"Introduce yourselves!"<<endl;
    //char to that will be used to user's answer
    char answer;

    //boolean to see if the taxing loop will continue or not
    bool noMoreTax = false;

    //set the initial taxes collected to 0
    double currentTaxes =0;


    //for loop that calls the speak function for each of the obects
    for(int i=0; i<myPopulation.size(); i++)
    {
        myPopulation[i]->speak();

    }

    //for loop that calls the growl and howl fucntion for the werewolves
    for(int i=0; i<myWolf.size(); i++)
    {
        myWolf[i]->growl();
        myWolf[i]->howl();


    }



    //light blue
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);

    //ask the user to enter y for yes and n for no if they wish to tax the citizens
    cout<<"\nShould we tax them today master?  Y or N: ";
    do
    {

        //set the intial collected taxes to 0
        double collectTaxes=0;


        //read in the user's answer
        cin>>answer;
        if(answer =='y'||answer=='Y')
        {

            for( int i =0; i<myPopulation.size(); i++)
            {


                //calls the functioncollects the tax from the citizen
                collectTaxes = myPopulation[i]->taxCalc();

                //calls the function of for the citizen to sasy their unique message about paying taxes
                myPopulation[i]->payTaxes();

                //add to current taxes if the tax collected is not negative
                if(collectTaxes >0)
                {

                    currentTaxes +=collectTaxes;
                }

                //if the citizen has no money left
                if(myPopulation[i]->taxCalc1()<=0)
                {
                    noMoreTax =true;
                    cout<<"I guess we can't tax them anymore since one citizen has no money left!"<<endl;
                }

            }
            // break;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            //ask the user if they wish to tax the citizens again
            cout<<"Master, should we tax them again? Y or N: ";

        }
        else
        {
            //if the user chose not to tax the citizens again
            noMoreTax=true;
        }

    }

    //keep looping until noMoreTax is true as in one of the citizen has no money left or they do not wish to tax them anymore
    while(noMoreTax!=true);

    //output the total tax that was collected
    cout<<"$"<<currentTaxes<<" has been collected in taxes today."<<endl;

    //delete the dynamically generated citizens
    for(int i =0; i<myPopulation.size(); i++)
    {
        delete myPopulation[i];
    }

    //delete the dynamcially generated wolves
    for(int i=0; i<myWolf.size(); i++)
    {
        delete myWolf[i];
    }
    return 0;
}
