#include <iostream>
using namespace std;
//funcion suma total de los elementos del array
int sumarArray(int arr[],int tamano){
    int suma=0;
    for(int i=0;i<tamano;i++){
        suma=suma+arr[i];
    }
    return suma;
}

//funcion encontar el numero mayor
int mayordelArray(int arr[],int tamano){
    int mayor=arr[0];
    for(int i=1;i<tamano;i++){
        if(arr[i]>mayor){
            mayor=arr[i];
        }
    }
    return mayor;
}

int main (){
    int numeros[6]={32,4,35,54,6,77};
    int total = sumarArray(numeros,6);
    int max= mayordelArray(numeros,6);
    cout<<"La suma total de los elementos del array es: "<<total<<endl;
    cout<<"El numero mayor de los elementos es: "<<max<<endl;
    return 0;
}
