
#include <iostream>
#include <conio.h>

class Characters
{
private:
    std::string name;
    float lifePoints;
    float money;

public:
    Characters (std::string usrName,float usrLifePoints,float usrMoney)
    {
        name = usrName;
        float lifePoints = usrLifePoints;
        float money = usrMoney;
    }
    void getCharacters()
    {
        std::cout<<"The name of your character is: " << name;
        std::cout<<"\nThe LifePoints of your character are: " << lifePoints;
        std::cout<<"\nYour current money is: $" << money;
    }
};

int main(){

    Characters character1("Pepe",25,20);

}