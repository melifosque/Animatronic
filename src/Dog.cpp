#include <Animatronic.hpp>
#include <DomesticAnimal.hpp>
#include <Dog.hpp>

Dog :: Dog()
{};
Dog :: ~Dog()
{};
int Dog :: seeBattery()
{
    return battery;
};
void Dog :: Sleep(int hours, string name)
{
    if (battery < 100)
        {
            battery += hours*3;
            cout << name << " Esta durmiendo!";
        }
    else
    {
        cout << "Bateria completa! No es posible dormir, sal a pasear!" << endl;
    }
};
void Dog :: Eat(int dish, string name)
{

    if (battery < 100)
    {
        battery += dish*10;
        cout << name << " esta comiendo!" << endl;
    }
    else
    {
        cout << name << " Ya esta lleno. " << endl; 
    }

};

void Dog :: Walk(int km)
{
    if (battery > 20)
        {
            battery-= km*10;
        }
    else
    {
        cout << "No puede pasear, su bateria se esta agotando, por favor comer o dormir " << endl;
    }
};

void Dog :: Bark()
{
    cout << "Guau! Guau!" << endl;
    battery -=1;
};