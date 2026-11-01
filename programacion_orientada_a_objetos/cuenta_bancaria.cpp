#include <iostream>
#include <string>
using namespace std;

class cuentaBancaria {
    private:
    string titular;
    string numero;
    double saldo;

    public:

    string getTitular() const{
        return  titular;
    }

    string getNumero() const{
        return numero;
    }

    double getSaldo() const{
        return saldo;
    }




    cuentaBancaria(string nombre, string number, double saldoCuenta) : titular(nombre), numero(number){
        if(saldoCuenta<0){
        saldo=0;   
        } else{
            saldo=saldoCuenta;
        }
    }
    
    cuentaBancaria() : titular("Sin titular"), numero("0000"), saldo(0){    
    }

    bool depositar(double monto){
        if(monto>0){
            saldo=saldo+monto;
            return true;
        } else{
            return false;
        }
    }

    bool retirar(double monto){
        if(monto<=saldo && monto>0){
            saldo=saldo-monto;
            return true;
        } else{
            return false;
        }
    }

    void mostrar() const{
    cout<<"---------------------------------"<<endl;
    cout<<"Titular: "<<titular<<endl;
    cout<<"Numero de cuenta: "<<numero<<endl;
    cout<<"Saldo disponible: "<<saldo<<endl;
    cout<<"---------------------------------"<<endl;
}

};

int main (){
    cuentaBancaria uno("Sebastian","1034567890",100.50);
    cuentaBancaria dos;

    uno.mostrar();

    if(uno.depositar(120)){
        cout<<"Deposito realizado exitosamente"<<endl;
    } else{
        cout<<"El monto ingresado no es valido"<<endl;
    }

    if(uno.depositar(-100)){
        cout<<"Deposito realizado exitosamente"<<endl;
    } else{
        cout<<"El monto ingresado no es valido"<<endl;
    }

    if(uno.retirar(50)){
        cout<<"Monto retirado exitosamente"<<endl;
    } else {
        cout<<"El monto ingresado no es valido"<<endl;
    }

    if(uno.retirar(500)){
        cout<<"Monto retirado exitosamente"<<endl;
    } else{
        cout<<"El monto ingresado no es valido"<<endl;
    }

    uno.mostrar();
    dos.mostrar();

    return 0;
}