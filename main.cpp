/*
Amerike University
Author: Ali Angel
Work #: 24
Date: 23/04/25
Description: This program will use constructors to fill a class and then created 3 objects.
and showed their attributes with a class function
*/

#include <iostream>
#include <conio.h>

void pressAnyKey();

class Characters
{
private:
    std::string name;
    int lifePoints;
    double money;

public:
    Characters (std::string usrName,int usrLifePoints,double usrMoney)
    {
        name = usrName;
        lifePoints = usrLifePoints;
        money = usrMoney;
    }
    void getCharacters()
    {
        std::cout<<"The name of your character is: " << name;
        std::cout<<"\nThe LifePoints of your character are: " << lifePoints;
        std::cout<<"\nYour current money is: $" << money <<"\n";
        pressAnyKey();
    }
};

int main(){

    Characters character1("Pepe",25,20.11);
    Characters character2("Juanito",50,11.50);
    Characters character3("Eusebio",30,5);

    character1.getCharacters();
    character2.getCharacters();
    character3.getCharacters();

    return 0;
}

void pressAnyKey()
{
    std::cout<<"PRESS ANY KEY TO CONTINUE";
    getch();
    system("cls");

}