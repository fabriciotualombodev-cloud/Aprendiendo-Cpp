#include <iostream>
#include <string>
using namespace std;

class Tarea{
    private:
    string titulo, estado; //    estado: 0. pendiente, 1. En progreso, 2. Completado
    int prioridad; // prioridad: 1.Baja, 2. Media, 3.Alta 

    public:

    Tarea(string nombre, int preferencia) :  titulo(nombre){
        if(preferencia>0 && preferencia<4){
            prioridad=preferencia;
        } else{
            prioridad=2;
        }
        estado="Pendiente";
    }

    Tarea():    titulo("Sin titulo"), estado("Pendiente"), prioridad(2){
    }

    string getTitulo() const{
        return titulo;
    }

    string getEstado() const{
        return estado;
    }

    int getPrioridad() const{
        return prioridad;
    }

    bool cambiarEstado(string progreso){
        if(progreso=="Pendiente" || progreso=="En progreso" || progreso=="Terminada"){
            estado=progreso;
            return true;
        } else{
            return false;
        }
    }

    bool cambiarPrioridad (int preferencia){
        if(preferencia==1 || preferencia==2 || preferencia==3){
            prioridad=preferencia;
            return true;
        } else{
            return false;
        }
    }

    void mostrar() const{
        cout<<"------------------------"<<endl;
        cout<<titulo<<endl;
        cout<<prioridad<<endl;
        cout<<estado<<endl;
        cout<<"------------------------"<<endl;
    }



};

void crearTarea(Tarea lista[], int& cantidad){
    string titulo;
    int prioridad;
    if(cantidad<10){
        cout<<"======Crear Nueva Tarea======"<<endl;
        cout<<"Ingrese el titulo de la nueva tarea: "<<endl;
        cin.ignore();
        getline(cin,titulo);
        cout<<"Ingrese el numero de la prioridad de la tarea: (1.Baja, 2.Media, 3.Alta)"<<endl;
        cin>>prioridad; 
        lista[cantidad]=Tarea(titulo,prioridad);
        cout<<"La tarea se guardo correctamente"<<endl;
        cantidad++;
    } else{
        cout<<"El limite de tareas esta lleno. Elimine alguna"<<endl;
        return;
    }
}

void mostrarTodas(const Tarea lista[],int cantidad){
    for(int i=0;i<cantidad;i++){
        cout<<"Tarea "<<i+1<<endl;
        lista[i].mostrar();
    }
}

void cambiarEstadoTarea(Tarea lista[], int cantidad){
    string nuevoEstado;
    int numtarea; 
    cout<<"Ingrese el numero de tarea que va a modificar: "<<endl;
    cin>>numtarea;
    if(numtarea>0 && numtarea<=cantidad){
        cout<<"La tarea seleccionada es la siguiente: "<<endl;
        lista[numtarea-1].mostrar();
        cout<<"Ingrese el nuevo estado: (Pendiente, En progreso, Terminada) "<<endl;
        cin.ignore();
        getline(cin,nuevoEstado);
        if(lista[numtarea-1].cambiarEstado(nuevoEstado)){
            cout<<"Estado guardado correctamente"<<endl;
        } else{
            cout<<"El estado ingresado no es valido."<<endl;
        }
    } else{
        cout<<"La tarea ingresada no existe."<<endl;
        return;
    }
}

void filtrarPorPrioridad(const Tarea lista[], int cantidad, int prioridad){
    bool encontrada = false;
    for(int i = 0; i < cantidad; i++){
        if( lista[i].getPrioridad() == prioridad ){
            lista[i].mostrar();
            encontrada = true;
        }
    }
    if(!encontrada){
        cout << "No hay tareas con esa prioridad" << endl;
    }
}

int main (){
    Tarea lista [10]; 
    int cantidad = 0;
    int opcion;
    int selecPrioridad;

    do
    {
        cout<<"=======Gestor de Tareas========"<<endl;
        cout<<"----------------------------------"<<endl;
        cout<<"| Seleccione la opcion que desea. |"<<endl;
        cout<<"| 1. Crear una nueva tarea        |"<<endl;
        cout<<"| 2. Visualizar todas las tareas  |"<<endl;
        cout<<"| 3. Cambiar estado de una tarea  |"<<endl;
        cout<<"| 4. Filtrar tareas por prioridad |"<<endl;
        cout<<"| 5. Salir                        |"<<endl;
        cout<<"-----------------------------------"<<endl;
        cin>>opcion;

        switch (opcion)
        {
        case 1:
        crearTarea(lista,cantidad);
        break;

        case 2:
        mostrarTodas(lista,cantidad);
        break;

        case 3:
        cambiarEstadoTarea(lista,cantidad);
        break;

        case 4:
        cout<<"Seleccione la prioridad que quiere filtrar las tareas: (1.Baja, 2.Media, 3.Alta)"<<endl;
        cin>>selecPrioridad;
        if(selecPrioridad>0 && selecPrioridad<=3){
        filtrarPorPrioridad(lista,cantidad,selecPrioridad);
        }else{
            cout<<"La prioridad ingresada no es valida."<<endl;
        }
        break;

        case 5:
        cout<<"Gracias por usar el programa. Que tengas un buen dia =)"<<endl;
        break;

        
        default:
        cout<<"La opcion ingresada no es valida. Intente de nuevo."<<endl;
        break;
        }

    }   while (opcion!=5);
    
    return 0;
}