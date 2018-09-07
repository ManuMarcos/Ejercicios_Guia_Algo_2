/* Dada una serie de números reales, determinar el valor máximo, el mínimo y las
posiciones en que estos se encontraban en la serie. El programa deberá ir
preguntando si hay más números para ingresar.*/
#include <iostream>
using namespace std;
int main(){
int posicion=-1,num_ingresado,maximo,minimo,pos_maximo,pos_minimo;
string respuesta;
cout<<"Ingresa un numero:";
cin>>num_ingresado;
posicion+=1;
maximo=num_ingresado;
minimo=num_ingresado;
cout<<"Hay mas numeros para ingresar?(s/n)";
cin>>respuesta;
while (respuesta=="s"){
    cout<<"Ingresa un numero:";
    cin>>num_ingresado;
    posicion+=1;
    if (num_ingresado>maximo){
        maximo=num_ingresado;
        pos_maximo=posicion;
        }
    if (num_ingresado<minimo){
        minimo=num_ingresado;
        pos_minimo=posicion;
    }
    cout<<"Hay mas numeros para ingresar?(s/n)";
    cin>>respuesta;
}
cout<<"El minimo numero ingresado es: "<<minimo<<" y se encontraba en la posicion "<<pos_minimo<<endl;
cout<<"El maximo numero ingresado es: "<<maximo<<" y se encontraba en la posicion "<<pos_maximo;
return 0;
}

