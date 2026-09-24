#include <iostream>
using namespace std;

void mostrarArray(int arr[], int tamano){
    for(int i=1;i<tamano;i++){
        cout<<arr[i]<<endl;
    }

}

int main (){
    int enteros[5]={3,6,9,12,15};

    mostrarArray(enteros,5);

    return 0;
}