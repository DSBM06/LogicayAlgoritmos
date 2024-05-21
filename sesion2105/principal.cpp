#include <iostream>
#include "variables.h"

using namespace std;

int main(int argc, char const *argv[])
{
    PERSON teacher;
    PERSON students[MAXREGISTERS];
    int op, i=0;
    cout<< "CIF: ";
    cin >> teacher.cif;
    cout << "Nombre: ";
    scanf(" %[^\n]", teacher.name);
    cout<< "Apellidos: ";
    scanf("%[^\n]", teacher.lastname);

    do{
        system("cls||clear");
        printf("CIF: ");
        scanf("%[^\n]", students[i].cif);
        printf("Nombres: ");
        scanf("%[^\n]", students[i].name);
        printf("Apellidos: ");
        scanf("%[^\n]", students[i].lastname);
        printf("Nota: ");
        scanf("%d", students[i].grade);

        printf("Desea ingresar otro registro \n 1. Si \n 0. No \n Digite su Opcion: ");
        cin >> op;
        i++;
    }while(op!=0);
    

    printf("Datos del profesor\n cif: %s", teacher.cif);
    printf( "Nombre: %s %s\n", teacher.name, teacher.lastname);
    cout << "Listado de estudiantes\n";
    for(int j=0; j<i;j++){
        printf("Nombre: %s \nApellidos: %s \nNota: %d\n",
        students[j].name, students[j].lastname, students[j].grade);
    }
    return 0;
}

