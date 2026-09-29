#include <iostream>
#include <string>
using namespace std;

void mostrarMenu(){
    cout<<"========Sistema de Usuarios======="<<endl;
    cout<<"1. Registrarse\n2. Iniciar sesion\n3. Salir\nEliga una opcion"<<endl;
}

bool validarContrasena(string contrasena){
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
    if (contrasena.length()<8){
        return false;
    }
     if (tieneNumero==false){
        return false;
    }
    if (tieneMayuscula==false){
        return false;
    }
    return true;
}

int buscarUsuario(string usuarios[],int cantidad,string nombre){
    for(int i=0;i<cantidad;i++){
        if(usuarios[i]==nombre){
            return i;
        }
    }
 return -1;
}

int main () {
    string usuarios[5];
    string contrasenas[5];
    int cantidad=0;
    int opcion;
    do{
        mostrarMenu();
        cin>>opcion;
        cin.ignore();
        switch(opcion){
            case 1:{
             string usuario;
             string contrasena;
             cout<<"Elegiste la opcion Registrarse"<<endl;
             cout<<"Ingresa un nombre de usuario: ";
             getline(cin,usuario);
             int numUsuario = buscarUsuario(usuarios,cantidad,usuario);
             if(numUsuario!= -1){
                cout<<"El usuario ingresado ya se encuentra resgistrado."<<endl;
             } else{
                cout<<"Ingrese una contrasenas que cumpla con los siguientes requisitos: ";
                cout<<"\n- Debe tener al menos 8 caracteres\n- Debe contener al menos un numero(0-9)\n- Debe contener al menos una letra mayuscula"<<endl;
                cin>>contrasena;
                bool contrasenaValida = validarContrasena(contrasena);
                if(contrasenaValida){
                    usuarios[cantidad] = usuario;
                    contrasenas[cantidad] = contrasena;
                    cantidad++;
                    cout<<"Registrado Exitosamente."<<endl;
                } else{
                    cout<<"La contrseña no cumple con los requisitos. "<<endl;
                }
             }
            break;}

            case 2:{
             string usuario, contrasena;
             cout<<"Elegiste la opcion Iniciar sesion"<<endl;
             cout<<"Ingrese el usuario: ";
             getline(cin,usuario);

             int posicion = buscarUsuario(usuarios,cantidad,usuario);

             if(posicion == -1){
                cout<<"El usuario no existe"<<endl;
             } else {
                 bool loginExitoso = false;

                 for(int intento=0; intento<3; intento++){
                 cout<<"Contrasena: ";
                 cin>>contrasena;

                 if(contrasena == contrasenas[posicion]){
                  cout<<"Bienvenido, "<<usuario<<endl;
                  loginExitoso = true;
                  break;
                 } else {
                 cout<<"Contrasena incorrecta. Intentos restantes: "<<(2-intento)<<endl;
                   }
                 }

                  if(loginExitoso == false){
                     cout<<"Se agotaron los intentos"<<endl;
                    }
                }
               break;}

            case 3:
             cout<<"Gracias por usar el sistema. Que tengas un bien dia."<<endl;
            break;
            
            default:
            cout<<"Opcion invalida"<<endl;
        }
    } while(opcion!=3);

    return 0;
}