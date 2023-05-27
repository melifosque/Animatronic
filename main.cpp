#include <iostream>
#include <Animatronic.hpp>
#include <DomesticAnimal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

void clearScreen();
void playCat();
void playDog();

void playCat()
{
    Cat* cat= new Cat();
    string name;
    int hs;
    int food;
    int km;

    cout << endl
    << "*** Elegiste jugar con el gato ***" << endl << endl
    << "Que nombre queres ponerle? " << endl;
    cin >> name;
    cat->setName(name);

    int option;
    do
    {
        cout << endl
        << "**** Vas a jugar con " << cat->getName() << endl
        << "1 - Ver bateria" << endl
        << "2 - Dormir a " << cat->getName() << endl
        << "3 - Alimentar a " << cat->getName() << endl
        << "4 - Salir a correr" << endl
        << "5 - Maullar" << endl
        << "6 - Salir" << endl 
        << "Seleccionar una opcion: ";
    cin >> option;
    clearScreen();

    switch(option)
    {
        case 1: cout << cat->seeBattery();  
        break;
        case 2: 
        {
            cout << "Cuantas horas va a domir " << cat->getName() << "?: ";
            cin >> hs;
            cat->Sleep(hs, name);
        }
        break;

        case 3: 
        {
            cout << "Cuantos platos de alimentos va a comer " << cat->getName() << "?: ";
            cin >> food;
            cat->Eat(food, name);
        }
        break;

        case 4:
        {
            cout << "Cuantos kilometros quiere correr " << cat->getName() << endl;
            cin >> km;
            cat->Run(km);
        }
        break;

        case 5: cat->Meow();
        break;

        case 6: cout <<"Saliste de la lista existosamente";
        break;

        default: cout << "Opcion desconocida!" << endl;
        break;
    }

    } while (option != 6);

    delete cat;
}

void playDog()
{
    Dog* dog= new Dog();
    string name;
    int hs;
    int food;
    int km;

    cout << endl
    << "*** Elegiste jugar con el perro ***" << endl << endl
    << "Que nombre queres ponerle? " << endl;
    cin >> name;
    dog->setName(name);

    int option;
    do
    {
        cout << endl
        << "**** Vas a jugar con " << dog->getName() << endl
        << "1 - Ver bateria" << endl
        << "2 - Dormir a " << dog->getName() << endl
        << "3 - Alimentar a " << dog->getName() << endl
        << "4 - Salir a correr" << endl
        << "5 - Ladrar" << endl
        << "6 - Salir" << endl 
        << "Seleccionar una opcion: ";
    cin >> option;

    clearScreen();

        switch(option)
        {
            case 1: cout << dog->seeBattery();  
            break;
            case 2: 
            {
                cout << "Cuantas horas va a domir " << dog->getName() << "?: ";
                cin >> hs;
                dog->Sleep(hs, name);
            }
            break;

            case 3: 
            {
                cout << "Cuantos platos de alimentos va a comer " << dog->getName() << "?: ";
                cin >> food;
                dog->Eat(food, name);
            }
            break;

            case 4: 
            {
                cout << "Cuantos kilometros queres pasear con " << dog->getName() << endl;
                cin >> km;
                dog->Walk(km);
            }
            break;

            case 5: dog->Bark();
            break;
            
            case 6: cout << "Saliste de la lista existosamente";
            break;
            default: cout << "Opcion desconocida!" << endl;
            break;
        }

    } while (option != 6);


    delete dog;
}

int main()
{
    int option;
    do
    {
    cout << endl
        << "*** Animaltronic ***" << endl << endl
        << "1 - Jugar con el gato" << endl
        << "2 - Jugar con el perro" << endl
        << "3 - Salir" << endl
        << "Seleccionar una opcion: ";
    cin >> option;

    clearScreen();

        switch(option)
        {
            case 1: playCat();  
            break;
            case 2: playDog();
            break;
            case 3: cout << "Saliste de la lista existosamente";
            break;
            default: cout << "Opcion desconocida!" << endl;
            break;
        }
        clearScreen();
    } while (option != 3);

    return 0;
}

void clearScreen()
{
   //GNU/LINUX:
   #ifdef __unix__
   system("clear");
   //OSX:
   #elif __APPLE__
   system("clear");
   //MICROSOFT WINDOWS:
   #elif defined(_WIN32) || defined(WIN32)
   system("cls");
   #endif
}
/*void showMenu();
{
    int option;
    do
    {
    cout << endl
        << "*** Animaltronic ***" << endl << endl
        << "1 - Jugar con el gato" << endl
        << "2 - Jugar con el perro" << endl
        << "3- Salir" << endl
        << "Seleccionar una opcion: ";
    cin >> option;

    clearScreen();

        switch(option)
        {
            case 1: playdog();  
            break;
            case 2: playDog();
            break;
            case 3: "Saliste de la lista existosamente";
            break;
            default: cout << "Opcion desconocida!" << endl;
            break;
        }
        clearScreen();
    } while (opcion != 3);
}*/