#include <iostream>
#include <string>
using namespace std;

class Alumno {
    private:
    string nombre; 
    double nota;

    public:
    //constructor por defecto
    Alumno(){
        nombre="Sin nombre";
        nota=0;
    }

    //constructor
    Alumno(string estudiante, double calificacion){
        nombre=estudiante;
        if (calificacion>0 && calificacion<=10){
            nota=calificacion;
        } else{
            nota=0;
        }
    }

    bool estaAprobado(){
            if(nota>=7){
                return true;
            } else{
                return false;
            }
    }

    void mostrar (){
        cout<<nombre<<endl;
        cout<<nota<<endl;
    }


};


int main(){
    Alumno a;
    a.mostrar();

    cout<<"---------------------------"<<endl;


    Alumno b("Sebastian", 7);
    b.mostrar();
    if(b.estaAprobado()){
        cout<<"Aprobado"<<endl;
    } else{
        cout<<"No aprobo"<<endl;
    }

    cout<<"---------------------------"<<endl;

    Alumno c("Alex", 6);
    c.mostrar();

    cout<<"---------------------------"<<endl;

    Alumno lista[3];
    for(int i=0;i<3;i++){
        lista[i].mostrar();

        if(lista[i].estaAprobado()){
            cout<<"Aprobado"<<endl;
        } else{
            cout<<"No Aprobo"<<endl;
        }
    }
    
    cout<<"---------------------------"<<endl;

    Alumno d("Ana", 10);
    d.mostrar();
    if(d.estaAprobado()){
        cout<<"Aprobado"<<endl;
    } else{
        cout<<"No aprobo"<<endl;
    }

    return 0;
}