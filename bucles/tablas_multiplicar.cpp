#include <iostream>
using namespace std;

int main(){
    int num, i;

    cout<<"===============Tablas de Multiplicar=================="<<endl;
    cout<<"Ingrese un numero para mostrar su tabla de multiplicar"<<endl;
    cin>>num;
    for(i=1; i<=12; i++){
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}