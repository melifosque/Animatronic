#ifndef DOG_HPP
#define DOG_HPP

class Dog : public DomesticAnimal, Animatronic
{
    private:
        int battery=100;

    public:
        Dog();
        ~Dog();
        int seeBattery();
        void Sleep(int hours, string name);
        void Eat(int dish, string name);
        void Bark();
        void Walk(int km);

};
#endif