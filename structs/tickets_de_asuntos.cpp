#include <iostream>
#include <string>
using namespace std;

struct Ticket {
    string asuntoProblema;
    string nombreCliente;
    int prioridad;
    bool resuelto;
};

int main (){

    Ticket tickets[4];
    cout<<"======Sistema de Tickets de Soporte======"<<endl;
    
    for(int i=0;i<4;i++){
        cout<<"Escriba el motivo de su problema: "<<endl;
        cin.ignore();
        getline(cin,tickets[i].asuntoProblema);
        cout<<"Ingrese su nombre: "<<endl;
        getline(cin,tickets[i].nombreCliente);
        cout<<"Ingrese cual es la prioridad de su asunto (1. Baja, 2. Media, 3. Alta):"<<endl;
        cin>>tickets[i].prioridad;
        cout<<"¿Resolvieron el problema? (1.Si, 0.No) "<<endl;
        cin>>tickets[i].resuelto;
    }

    for(int i=0;i<4;i++){
        if(tickets[i].prioridad==3 && !tickets[i].resuelto){
            cout<<"¡ ATENCION ! Ticket sin resolver: "<<tickets[i].asuntoProblema<<" Cliente: "<<tickets[i].nombreCliente<<endl;
        }
    }

    int resueltos=0;
    int pendientes=0;

    for (int i=0;i<4;i++){
        if(tickets[i].resuelto){
        resueltos++;
       } else {
        pendientes++;
       }
    }
    cout<<"Tickets resueltos: "<<resueltos;
    cout<<"\nTickets pendientes: "<<pendientes;

    

    return 0;

}