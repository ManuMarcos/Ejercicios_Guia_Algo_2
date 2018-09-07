#include <iostream>
using namespace std;
int main(){
int num_ingresado, tope=0;
cout<<"Ingresa un numero:";
cin>>num_ingresado;
tope=num_ingresado+20;
for (num_ingresado; num_ingresado<=tope; num_ingresado++)
    cout<<num_ingresado<<endl;
return 0;
}
