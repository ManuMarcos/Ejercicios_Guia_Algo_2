#include <iostream>
using namespace std;
void mayor_menor_igual_a_cero(int numero);

int main(){
int numero;
cout<<"Ingresa un numero:";
cin>>numero;
mayor_menor_igual_a_cero(numero);
}


void mayor_menor_igual_a_cero(int numero){
    if (numero>0)
    cout<<"Mayor a cero";
    else if (numero==0)
        cout<<"Igual a cero";
    else
        cout<<"Menor a cero";
}
