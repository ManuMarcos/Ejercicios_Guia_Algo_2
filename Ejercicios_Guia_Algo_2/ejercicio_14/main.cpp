#include <iostream>
using namespace std;
int factorial(long double n);
int main(){
long double n;
cout<<"Ingresar un numero (mayor o igual a 0) para calcular su factorial:";
cin>>n;
cout<<"El factorial de"<<" "<<n<<" "<<"es"<<" "<<factorial(n);
return 0;
}


int factorial(long double n){
    if (n<=1)
        return 1;
    else
        return n*factorial(n-1);
}
