#include <iostream>
using namespace std;

//ingresar las notas
void cargarnotas(float notas[],int tamano){
    for(int i=0;i<tamano;i++){
        cout<<"Ingrese la calificacion del estudiante (0-100) "<<(i+1)<<": ";
        cin>>notas[i];
        while(notas[i]<0 || notas[i]>100){
            cout<<"Error: Ingrese notas dentro del rango permitido. Intente de nuevo ";
            cin>>notas[i];
        }
    }
}

//calcular promedio 
double calcularPromedio(float notas[],int tamano){
    double suma=0;
    for(int i=0;i<tamano;i++){
        suma=suma+notas[i];
    }
    double promedio = suma/tamano;
    return promedio;
}

//aprobados del grupo
int estudiantesAprobados(float notas[],int tamano){
    int aprobados=0;
    for(int i=0;i<tamano;i++){
        if(notas[i]>=60){
            aprobados=aprobados+1;
        }
    }
    return aprobados;
}

//reprobados del grupo
int estudiantesReprobados(float notas[],int tamano){
    int reprobados=0;
    for(int i=0;i<tamano;i++){
        if(notas[i]<60){
            reprobados=reprobados+1;
        }
    }
    return reprobados;
}

//nota mayor del grupo
double notaMayor(float notas[],int tamano){
    double mayor=notas[0];
    for(int i=1;i<tamano;i++){
        if(notas[i]>mayor){
            mayor=notas[i];
        }
    }
    return mayor;
}

//Nota menor del grupo
double notaMenor(float notas[],int tamano){
    double menor=notas[0];
    for(int i=1;i<tamano;i++){
        if(notas[i]<menor){
            menor=notas[i];
        }
    }
    return menor;
}

//Reporte
void mostrarReporte(float notas[], int tamano, double promedio, int aprobados, int reprobados, double mayor, double menor){
    cout<<"=============Reporte Final==============="<<endl;
    cout<<"Promedio del grupo de estudiantes: "<<promedio<<endl;
    cout<<"Nota mas alta: "<<mayor<<endl;
    cout<<"Nota mas baja: "<<menor<<endl;
    cout<<"Aprobados: "<<aprobados<<endl;
    cout<<"Reprobados: "<<reprobados<<endl;
    cout<<"========================================="<<endl;
}


int main(){
    cout<<"====Sistema de Analisis de Calificaciones===="<<endl;
    float notas[5];
    cargarnotas(notas,5);
    double promedio= calcularPromedio(notas,5);
    int aprobados=estudiantesAprobados(notas,5);
    int reprobados=estudiantesReprobados(notas,5);
    double mayor=notaMayor(notas,5);
    double menor=notaMenor(notas,5);

    mostrarReporte(notas,5,promedio,aprobados,reprobados,mayor,menor);

    return 0;
}