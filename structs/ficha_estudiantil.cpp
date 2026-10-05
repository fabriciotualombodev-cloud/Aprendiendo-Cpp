#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    double promedio;
};

int main (){
    Estudiante e1;
    cout<<"=====Creacion de ficha estudiantil====="<<endl;
    cout<<"Ingrese su nombre y apellido: ";
    getline(cin,e1.nombre);
    cout<<"\nIngrese su edad: ";
    cin>>e1.edad;
    cout<<"\nIngrese su promedio: ";
    cin>>e1.promedio;
    cout<<"============Ficha Estudiantil==================="<<endl;
    cout<<"| Estudiante:  "<<e1.nombre<<" |"<<endl;
    cout<<"| Edad: "<<e1.edad<<" |"<<endl;
    cout<<"| Promedio: "<<e1.promedio<<" |"<<endl;
    return 0;
}