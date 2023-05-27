:: Compilo codigo objeto
g++ -Wall -std=c++11 -I./include -c ./src/Animatronic.cpp 
g++ -Wall -std=c++11 -I./include -c ./src/DomesticAnimal.cpp
g++ -Wall -std=c++11 -I./include -c ./src/Cat.cpp
g++ -Wall -std=c++11 -I./include -c ./src/Dog.cpp
g++ -Wall -std=c++11 -I./include -c main.cpp 

:: Compilo el Binario
g++ -I./include Animatronic.o DomesticAnimal.o Cat.o Dog.o main.o -o Animatronic.exe

:: Limpio los códigos objeto
DEL Animatronic.o
DEL DomesticAnimal.o
DEL Cat.o
DEL Dog.o
DEL main.o

:: Ejecuto
Animatronic.exe