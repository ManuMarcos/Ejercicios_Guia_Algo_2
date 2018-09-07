#include <iostream>
using namespace std;
int main(){
int num_ingresado, cantidad_elementos;
int *pa;
cout<<"Indica la cantidad de numeros que vas a ingresar: ";
cin>>cantidad_elementos;
pa=new int[cantidad_elementos];
for(i=0;i<=cantidad_elementos;i++){
    cout<<"Ingresa un numero: ";
    cin>>numero_ingresado;
    pa[i]=numero_ingresado;
}
cout<<pa;
return 0;
}
