#include <iostream>
#include <string>
using namespace std;
int main(){
    string nombreCompleto;
    cout<<"Ingresa tu nombre completo: "<<endl;
    getline(cin,nombreCompleto);
    cout<<"Buenas tardes "<<nombreCompleto<<endl;
    cout<<"Su nombre tiene "<<nombreCompleto.length()<<" letras."<<endl;
    cout<<nombreCompleto[0]<<endl;
    return 0;
}