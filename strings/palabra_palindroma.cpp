#include <iostream>
#include <string>
using namespace std;

int main(){
    string palabra;
    cout << "Ingresa una palabra: ";
    cin >> palabra;

    bool esPalindromo = true;

    for(int i = 0; i < palabra.length()/2; i++){
        if(palabra[i] != palabra[palabra.length()-1-i]){
            esPalindromo = false;
        }
    }

    if(esPalindromo){
        cout << "\"" << palabra << "\" es un palindromo" << endl;
    } else {
        cout << "\"" << palabra << "\" no es un palindromo" << endl;
    }

    return 0;
}