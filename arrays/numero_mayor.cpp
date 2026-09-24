#include <iostream>
using namespace std;
int main(){
    int numeros[5]={300,8,76,4,23};
    int mayor = numeros[0];
    for(int i=1;i<5;i++){
        if (numeros[i]>mayor){
            mayor=numeros[i];
        }
    }
    cout<<"El numero mayor dentro del array es: "<<mayor;
    return 0;
}