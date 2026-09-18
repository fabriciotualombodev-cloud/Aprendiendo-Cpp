#include <iostream>
using namespace std;
int main (){
    int numa, numb, opc;
    float resultado;
    cout<<"=======Calculadora_Simple======="<<endl;
    cout<<"Ingrese un numero a"<<endl;
    cin>>numa;
    cout<<"Ingrese un numero b"<<endl;
    cin>>numb;
    cout<<"Seleccione la operacion a realizar"<<endl;
    cout<<"1. Suma"<<endl;
    cout<<"2. Resta"<<endl;
    cout<<"3. Multiplicacion"<<endl;
    cout<<"4. Division"<<endl;
    cin>>opc;
    switch (opc){
        case 1:
        resultado = numa+numb;
        cout<<"El resultado de la suma es: "<<endl;
        cout << "-------------------------" << endl;
        cout << "   " << resultado<< endl;
        cout << "-------------------------" << endl;
        break;
        case 2:
        resultado = numa-numb;
        cout<<"El resultado de la resta es: "<<endl;
        cout << "-------------------------" << endl;
        cout<<"  "<<resultado<<endl;
        cout << "-------------------------" << endl;
        break;
        case 3:
        resultado = numa*numb;
        cout<<"El resultado de la multiplicacion es: "<<endl;
        cout << "-------------------------" << endl;
        cout<<"  "<<resultado<<endl;
        cout << "-------------------------" << endl;
        break;
        case 4:
        if (numb == 0){
            cout<<"No se puede dividir entre 0"<<endl;
        } else{
            resultado = numa/numb;
            cout<<"El resultado de la division es: "<<endl;
            cout<<"  "<<resultado<<endl;
            cout << "-------------------------" << endl;
        }
        break;
        default:
        cout<<"Eliga una operacion correcta"<<endl;
        break;
    }
    return 0;
}