#include <iostream>
#include <string>
using namespace std;
int main(){
    string texto;
    cout<<"======Contador de Vocales======="<<endl;
    cout<<"Ingrese una palabra o frase: ";
    getline(cin,texto);
    int contadorVocales = 0;
    for(int i=0;i<texto.length();i++){
        if(texto[i]=='a' || texto[i]=='A'){
        contadorVocales++;  
        } else if(texto[i]=='e' || texto[i]=='E'){
            contadorVocales++;
        } else if(texto[i]=='i' || texto[i]=='I'){
            contadorVocales++;
        } else if(texto[i]=='o' || texto[i]=='O'){
            contadorVocales++;
        } else if(texto[i]=='u' || texto[i]=='U'){
            contadorVocales++;
        } 
    }
    cout<<"La palabra "<<texto<<" tiene "<<contadorVocales<<" vocales.";
    return 0;
}