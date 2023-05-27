#include <Animatronic.hpp>
#include <DomesticAnimal.hpp>
#include <Cat.hpp>

Cat :: Cat()
{};
Cat :: ~Cat()
{};
int Cat :: seeBattery()
{
    return battery;
};
void Cat :: Sleep(int hours, string name)
{
    if (battery < 100)
    {
        battery+=hours*20;
        
        cout << name << " esta durmiendo!" << endl;
    }
    else
    {
        cout << name << " No es posible dormir, tiene mucha energia. " << endl; 
    }
};
void Cat :: Eat(int dish, string name)
{
    if (battery < 100)
    {
        battery += dish*5;

        cout << name << " esta comiendo!" << endl;
    }
    else
    {
        cout << name << " Ya esta lleno. " << endl; 
    }
};
void Cat :: Run(int km)
{
    if (km <= battery && battery > 20)
    {
        battery-= km*5;
    }
    else
    {
        cout << "No puede correr mas, su bateria se esta agotando, por favor comer o dormir " << endl;
    }
};

void Cat :: Meow()
{
    cout << "Miau, miau!" << endl;
    battery -=1;
};