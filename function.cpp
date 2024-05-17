#include<iostream>
#include"variable.h"

using namespace std;

//Prototipo de funciones
void start();
void menu();
void addAges();
void mostAges();


//Funciones
void menu(){
    system("cls||clear");
    cout<<"1. Ingresar edades"<<endl;
    cout<<"2. Mostrar edades"<<endl;
    cout<<"3. Mostrar edad mayor"<<endl;
    cout<<"4. Mostrar edad menor"<<endl;
    cout<<"5. Mostrar promedio de edades"<<endl;
    cout<<"6. Salir"<<endl;
}

//Agregar edades
void addAges(){
    system("cls||clear");
    cout<< "Dime la edad: ";
    cin >> ages[pos];
    pos++;
    system("pause");
}

void start(){
    int option;

    while(option!=6){
        menu();
        cin>>option;
        switch (option)
        {
        case 1:
            addAges();
            break;

            case 2:
            mostAges();
            break;

        case 6:
            cout<<"Adios"<< endl;
            break;
        
        default:
            break;
        }
    }
}

void mostAges(){
    system("cls||clear");
    cout<<"edades: "<<endl;
    for (int i = 0; i < pos; i++){
        cout<<ages[i]<<endl;
    }
    system("pause");
}