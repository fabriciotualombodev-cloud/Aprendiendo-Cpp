#include <iostream>
using namespace std;
int main(){
    int numeros[5]={11,2,10,5,50};
    int suma = 0;
    for(int i=0;i<5;i++){
        suma=suma+numeros[i];
    }
    cout<<"La suma de los elemnetos es:"<<endl<<suma;
    return 0;
}