#include <Animatronic.hpp>
#include <DomesticAnimal.hpp>

DomesticAnimal :: DomesticAnimal()
{};
DomesticAnimal :: ~DomesticAnimal()
{};
void DomesticAnimal :: setName(string name)
{
    Name = name;
};
string DomesticAnimal :: getName()
{
    return Name;
};