#include <iostream>
#include <string>
using namespace std;

struct Tarea{
    string titulo;
    string descripcion;
    int prioridad; //1.baja, 2.medio, 3.alta
    int estado; //0=pendiente, 1=en progreso, 2=completada
};

void mostrarMenu(){
    cout<<"===========Organizador de Tareas============="<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"| 1. Crear tarea                            |"<<endl;
    cout<<"| 2. Ver todas las tareas                   |"<<endl;
    cout<<"| 3. Cambiar estado de una tarea            |"<<endl;
    cout<<"| 4. Ver solo tareas de alta prioridad      |"<<endl;
    cout<<"| 5. Salir                                  |"<<endl;
    cout<<"---------------------------------------------"<<endl;
}

string convertirPrioridad(int prioridad){
    if(prioridad==3){
        return "Alta";
    } else if(prioridad==2){
        return "Media";
    } else{
        return "Baja";
    }
}

void crearTarea (Tarea tareas[],int &cantidad){
    
    cout<<"Ingresa el nombre de la tarea: "<<endl;
    cin.ignore();
    getline(cin,tareas[cantidad].titulo);
    cout<<"Escribe una descripcion de la tarea: "<<endl;
    getline(cin,tareas[cantidad].descripcion);
    cout<<"Indique la prioridad de la tarea: (1.Baja, 2.Media, 3.Alta)"<<endl;
    cin>>tareas[cantidad].prioridad;
    tareas[cantidad].estado=0;
    cantidad++;
    
}

void verTareasporEstado(Tarea tareas[],int cantidad){
    cout<<"=========Pendiente=========="<<endl;
    for(int i=0;i<cantidad;i++){
        if(tareas[i].estado==0){
            cout<<"| "<<convertirPrioridad(tareas[i].prioridad)<<" | "<<tareas[i].titulo<<" - "<<tareas[i].descripcion<<endl;
        }
    }

    cout<<"=========En Progreso=========="<<endl;
    for(int i=0;i<cantidad;i++){
        if(tareas[i].prioridad==1){
            cout<<"| "<<convertirPrioridad(tareas[i].prioridad)<<" | "<<tareas[i].titulo<<" - "<<tareas[i].descripcion<<endl;
        }
    }

    cout<<"=========Completado=========="<<endl;
    for(int i=0;i<cantidad;i++){
        if(tareas[i].estado==2){
            cout<<"| "<<convertirPrioridad(tareas[i].prioridad)<<" | "<<tareas[i].titulo<<" - "<<tareas[i].descripcion<<endl;
        }
    }
}

void cambiarEstado(Tarea tareas[],int cantidad){
    int posicion, nuevoEstado;
    for(int i=0;i<cantidad;i++){
        cout<<i<<" - "<<tareas[i].titulo<<endl;
    }
    cout<<"Ingrese el numero de la tarea que desea cambiar el estado "<<endl;
    cin>>posicion;
    cout<<"Cual es el nuevo estado de la tarea (0=pendiente, 1=en progreso, 2=completada)"<<endl;
    cin>>nuevoEstado;
    tareas[posicion].estado=nuevoEstado;
    cout<<"Modificado correctamente"<<endl;
}

void verAltaprioridad(Tarea tareas[],int cantidad){
    cout<<"============Tareas de Alta Prioridad=============="<<endl;
    for(int i=0;i<cantidad;i++){
        if(tareas[i].prioridad==3){
            cout<<tareas[i].titulo<<" - "<<tareas[i].descripcion<<endl;
        }
    }
}


int main (){
    Tarea tareas[10];
    int cantidad=0;
    int opcion;

    do{
        mostrarMenu();
        cin>>opcion;

        switch(opcion){
            case 1:
            crearTarea(tareas,cantidad); 
            break;
            case 2:
            verTareasporEstado(tareas,cantidad);
            break;
            case 3:
            cambiarEstado(tareas,cantidad);
            break;
            case 4:
            verAltaprioridad(tareas,cantidad); 
            break;
            case 5:
            cout<<"Hasta luego que tengas un buen dia =)";
            break;
            default:       
            cout<<"Opcion invalida"<<endl; 
        }    
    } while (opcion != 5);

    return 0;
}