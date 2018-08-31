#include <iostream>
using namespace std;
bool es_par(int numero);

int main(){
    int numero;
    cout<<"Ingresa un numero:";
    cin>>numero;
    if (es_par(numero))
        cout<<"El numero ingresado es par";
    else
        cout<<"El numero ingresado es impar";
}

bool es_par(int numero){   //devuelve True si es par, sino devuelve false
    if (numero%2==0)
        return true;
    else
        return false;
}

