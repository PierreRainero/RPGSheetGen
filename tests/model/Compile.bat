g++ -c Class.cpp
g++ -c Object.cpp
g++ -c Weapon.cpp
g++ -c Clothe.cpp
g++ -c Character.cpp
g++ -c Main.cpp
g++ Class.o Object.o Weapon.o Clothe.o Character.o Main.o -o Main.exe
del Class.o Object.o Weapon.o Clothe.o Character.o Main.o