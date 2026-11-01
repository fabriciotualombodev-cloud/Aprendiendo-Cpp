#include <iostream>
#include <string>
using namespace std;

class Libro {
    private:
    string titulo;
    int paginas;
    double precio;

    public:
    Libro(string nombre, int planos, double valor) : titulo(nombre) {
        if(planos<=0){
            paginas=1;
        } else{
            paginas=planos;
        }

        if(valor<0){
            precio=0;
        } else{
            precio=valor;
        }
    } 

    string getTitulo() const{
        return titulo;
    }

    int getPaginas() const{
        return paginas;
    }

    double getPrecio() const{
        return precio;
    }

    void setPrecio(double valor){
        if(valor>=0){
            precio=valor;
        }
    }
};

void imprimirLibro (const Libro& l){
    cout<<l.getTitulo()<<endl;
    cout<<l.getPaginas()<<endl;
    cout<<l.getPrecio()<<endl;
}

void aplicarDescuento (Libro& l, double porcentaje){
    if(porcentaje>=0 && porcentaje<=100){
        double valorDescuento = porcentaje*(l.getPrecio()/100);
        double valorNuevo = l.getPrecio()-valorDescuento;
        l.setPrecio(valorNuevo); 
    } else{
        cout<<"El porcentaje ingreado no es valido"<<endl;
    }
}

int indiceMasCaro(const Libro lista[], int cantidad){
    int libroMayor=0;
    for(int i=1;i<cantidad;i++){
        if(lista[i].getPrecio()>lista[libroMayor].getPrecio()){
            libroMayor=i;
        }
    }
    return libroMayor;
}

double precioTotal(const Libro lista[], int cantidad){
    double total=0;
    for(int i=0;i<cantidad;i++){
        total=lista[i].getPrecio()+total;
    }
    return total;
}


int main (){
    Libro lista[3]={Libro("Habitos", 300, 40), Libro("48 leyes", 640,20), Libro("Estrategia", 200, 90)};

    for(int i=0;i<3;i++){
        imprimirLibro(lista[i]);
        cout<<"---------------------------"<<endl;
    }

    aplicarDescuento(lista[0],50);
    imprimirLibro(lista[0]);
    
    int pos = indiceMasCaro(lista, 3);
    cout << lista[pos].getTitulo() << endl;


    double total=precioTotal(lista,3);
    cout<<"El precio total es: "<<total<<endl;

    return 0;

}