#include <iostream>
using namespace std;
//funcion
int suma (int a, int b){
    int resultado = a+b;
    return resultado;
}

int main(){
    int a,b;
    cout<<"Ingresa un numero a"<<endl;
    cin>>a;
    cout<<"Ingresa un numero b"<<endl;
    cin>>b;
    int total = suma(a,b);
    cout<<"El resultado de la suma es: "<<total<<endl;
    return 0;
}