#include <iostream>
#include <string>
using namespace std;

class Producto {
    private:
    string nombre;
    double precio;
    int stock;

    public:

    Producto(string titulo, double valor, int cantidad){
        nombre=titulo;
        precio=valor;
        stock=cantidad;
        if(precio<=0){
            precio=1;
        } 
        if(stock<0){
            stock=0;
        }
    }

    string getNombre () const {
        return nombre;
    }

    double getPrecio () const {
        return precio;
    }

    int getStock () const {
        return stock;
    }

    void setPrecio(double nuevoPrecio){
        if(nuevoPrecio>0){
        precio=nuevoPrecio;
        } else{
            cout<<"El precio ingresado no es valido"<<endl;
        }
    }

    bool vender(int cantidadPedida){
        if(stock>=cantidadPedida){
            stock=stock-cantidadPedida;
            return true;
        } else {
            return false;
        }
    }

    void mostrar () const{
        cout<<nombre<<endl;
        cout<<"El precio del producto es: "<<precio<<endl;
        cout<<"El stock disponible es: "<<stock<<endl;
    }

};

int main  (){
    Producto uno("Takis", 0.75, 10);
    Producto dos("Refresco", -0.35, 12);
    uno.setPrecio(0.35);
    if(uno.vender(13)){
        cout<<"Venta realizada"<<endl;
    } else{
        cout<<"Stock insuficiente"<<endl;
    }    
    uno.mostrar();
    cout<<"-----------------------------"<<endl;
    dos.setPrecio(-1);
    if(dos.vender(2)){
        cout<<"Venta realizada"<<endl;
    } else{
        cout<<"Stock insuficiente"<<endl;
    }    
    dos.mostrar();
    return 0;
}