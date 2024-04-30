/*imprimir los numeros del 70 al 99*/

#include <iostream>

using namespace std;

void imprimirNum();

int main()
{
    imprimirNum();
    /* code */
    return 0;
}

void imprimirNum()
{
    for (int i = 99; i >= 70; i--)
    {
        cout << i << endl;
    }
}
