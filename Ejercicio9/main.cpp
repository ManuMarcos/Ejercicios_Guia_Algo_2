#include <iostream>
using namespace std;
bool es_divisible(int numerador, int denominador);

int main(){
    int numerador;
    int denominador;
    cout<<"Ingresar numerador:";
    cin>>numerador;
    cout<<"Ingresar denominador:";
    cin>>denominador;
    if (es_divisible(numerador, denominador))
        cout<<numerador<<" "<<"es divisible por"<<" "<<denominador;
    else
        cout<<numerador<<" "<<"no es divisible por"<<" "<<denominador;
}

bool es_divisible(int numerador, int denominador){
    if (numerador%denominador==0)
        return true;
    else
        return false;
    }
