#include <iostream>
using namespace std;
int main(){
    int num, i;
    cout<<"========Contador Regresivo========"<<endl;
    cout<<"Ingrese un numero que desea contar regresivamente: "<<endl;
    cin>>num;
    for(i=num; i>=0; i--){
        cout<<i<<endl;
    }
    return 0;
}