#include <iostream>
using namespace std;
int calculadora(int numero_a, int numero_b, string operador);

int main(){
    int numero_a;
    int numero_b;
    string operador;
    cout<<"Ingresa un numero:";
    cin>>numero_a;
    cout<<"Ingresa otro numero:";
    cin>>numero_b;
    cout<<"Ingresar la operacion a realizar [+,-,*,/]:";
    cin>>operador;
    cout<<calculadora(numero_a, numero_b, operador);
}


int calculadora(int numero_a, int numero_b, string operador){
    if (operador=="+")
        return numero_a+numero_b;
    else if (operador=="-")
        return numero_a-numero_b;
    else if (operador=="*")
        return numero_a*numero_b;
    else
        return numero_a/numero_b;
}
