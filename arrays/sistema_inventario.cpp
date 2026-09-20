#include <iostream>
using namespace std;
int main(){
    int stock[5];
    int total=0;
    int agotados=0;
    cout<<"=================Sistema de Inventario V1====================="<<endl;
    for(int i=0;i<5;i++){
        cout<<"Ingrese el stock del prodcuto "<<(i+1)<<": ";
        cin>>stock[i];
        while(stock[i]<0){
            cout<<"Error: No se admiten valores negativos. Ingrese de nuevo: ";
            cin>>stock[i];
        }
    }
    cout<<"=============================================================="<<endl;
    for(int i=0;i<5;i++){
        if(stock[i]==0){
            cout<<"Producto "<<i+1<<": "<<"Agotado "<<"("<<stock[i]<<" unidades)"<<endl;
            agotados=agotados+1;
        } else if(stock[i]<=4){
            cout<<"Producto "<<i+1<<": "<<"Stock Bajo "<<"("<<stock[i]<<" unidades)"<<endl;
        } else{
            cout<<"Producto "<<i+1<<": "<<"Disponible "<<"("<<stock[i]<<" unidades)"<<endl;
        }
        total=stock[i]+total;
    }

    cout<<"=============================================================="<<endl;
    cout<<"=================Resumen de Inventario========================"<<endl;
    cout<<"Total de unidades en tienda: "<<total<<endl;
    cout<<"Productos agotados: "<<agotados<<endl;
    cout<<"=============================================================="<<endl;

    return 0;
}