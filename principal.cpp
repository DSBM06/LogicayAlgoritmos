#include <iostream>
#include "function.cpp"

//Realice un programa que permita almacenar x cantidad de edades, mostrar todas las edades, la edad mayor, la edad menor y el promedio de edades//
using namespace std;

int main(int argc, char const *argv[])
{
    int op;

    while(op!=6){
        menu();
        cin>>op;
    }
    return 0;
}
