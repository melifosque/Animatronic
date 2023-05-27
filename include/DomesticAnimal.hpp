#ifndef DOMESTICANIMAL
#define DOMESTICANIMAL
#include <iostream>
#include <string>
using namespace std;

class DomesticAnimal : public Animatronic
{       
    protected:
        string Name;
    public:
        DomesticAnimal();
        ~DomesticAnimal();
        void setName(string name);
        string getName();

        virtual void Eat(int dish, string name) = 0;
        virtual void Sleep(int hours, string name) = 0;
};
#endif