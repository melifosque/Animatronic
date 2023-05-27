#ifndef CAT_HPP
#define CAT_HPP

class Cat : public DomesticAnimal, Animatronic
{
    private:
        int battery=100;

    public:
        Cat();
        ~Cat();
        int seeBattery();
        void Sleep(int hours, string name);
        void Eat(int dish, string name);
        void Run(int km);
        void Meow();
};
#endif