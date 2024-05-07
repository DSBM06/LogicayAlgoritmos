#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout <<"Ingrese un numero: ";
    cin>>num;

    int count = 1;
    while (count <= 10){
        cout <<num  <<"x" <<count <<"=" <<num * count<<endl;
        count++;
    }
    
    return 0;
}
