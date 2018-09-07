#include <iostream>
using namespace std;
void imprimir_mayor_entre_dos_numeros(int a, int b);

int main(){
int a;
int b;
cout<<"Ingresar un numero:";
cin>>a;
cout<<"Ingresar otro numero:";
cin>>b;
imprimir_mayor_entre_dos_numeros(a, b);
}

void imprimir_mayor_entre_dos_numeros(int a, int b){
if (a>b)
    cout<<a;
else
    cout<<b;
}
