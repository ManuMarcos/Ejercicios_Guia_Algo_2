#include <iostream>
using namespace std;

int main(){
int num_ingresado, suma_parcial=0;
cout<<"Ingresa un numero (0 para terminar):";
cin>>num_ingresado;
cout<<num_ingresado<<endl;
while (num_ingresado!=0){
    suma_parcial+=num_ingresado;
    cout<<"Suma Parcial:"<<suma_parcial<<endl;
    cout<<"Ingresa un numero (0 para terminar):";
    cin>>num_ingresado;
    cout<<num_ingresado<<endl;
}
return 0;
}
