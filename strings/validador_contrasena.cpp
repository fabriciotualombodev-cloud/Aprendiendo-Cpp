#include <iostream>
#include <string>
using namespace std;
int main (){
    string contrasena;
    cout<<"=====Validador de Contrasenas====="<<endl;
    cout<<"Ingrese una contrasenas que cumpla con los siguientes requisitos: ";
    cout<<"\n- Debe tener al menos 8 caracteres\n- Debe contener al menos un numero(0-9)\n- Debe contener al menos una letra mayuscula"<<endl;
    cin>>contrasena;
    
    bool tieneNumero = false;
    bool tieneMayuscula = false;

    for(int i=0;i<contrasena.length();i++){
        if(contrasena[i]>='0' && contrasena[i]<='9'){
            tieneNumero=true;
        }

        if(contrasena[i]>='A' && contrasena[i]<='Z'){
            tieneMayuscula=true;
        }

    }

    bool esValida = true;

    if (contrasena.length()<8){
        cout<<"Error. Debe tener al menos 8 caracteres. "<<endl;
        esValida=false;
    }
    if (tieneNumero==false){
        cout<<"Error. Debe tener al menos un numero. "<<endl;
        esValida=false;
    }
    if (tieneMayuscula==false){
        cout<<"Error. Debe tener al menos una letra mayuscula. "<<endl;
        esValida=false;
    }
    if(esValida){
        cout<<"La contrasena es valida."<<endl;
    }
    return 0;
}