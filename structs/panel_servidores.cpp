#include <iostream>
#include <string>
using namespace std;

struct server{
    string name;
    double CPUusage;
    double Memoryusage;
    bool online;
};

int main(){
    server information[4];
    cout<<"=========Servers Dashboard=========="<<endl;
    for(int i=0;i<4;i++){
        cout<<"Ingrese el nombre del servidor: "<<endl;
        cin.ignore();
        getline(cin,information[i].name);
        cout<<"Ingre el % del uso de CPU: "<<endl;
        cin>>information[i].CPUusage;
        cout<<"Ingrese el % del uso de memoria: "<<endl;
        cin>>information[i].Memoryusage;
        cout<<"El servidor esta en linea (1.Si, 0.No)"<<endl;
        cin>>information[i].online;
    }

    for(int i=0;i<4;i++){
        if(information[i].CPUusage>=90 || information[i].Memoryusage>=90 || !information[i].online){
            cout<<"Alerta: Servidor "<<information[i].name<<" requiere atencion."<<endl;
        }
    }

    int online=0;
    int offline=0;

    for (int i=0;i<4;i++){
        if(information[i].online){
        online++;
       } else {
        offline++;
       }
    }
    cout<<"Servidores en linea: "<<online<<endl;
    cout<<"Servidores fuera de linea: "<<offline;

    return 0;
}
