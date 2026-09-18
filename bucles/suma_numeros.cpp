#include <iostream>
using namespace std;
int main(){
    int num, i, suma=0;
    cout<<"--------Suma de los primeros N numeros---------"<<endl;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;
    for(i=1; i<=num; i++){
        suma+=i;
    }
    cout<<"La suma de los primeros "<<num<<" numeros es: "<<suma<<endl;
    return 0;
}