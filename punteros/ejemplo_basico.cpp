#include <iostream>
using namespace std;

int main (){
    int edad = 20;
    int *p = &edad;

    cout<< edad <<endl;
    cout<< &edad <<endl;
    cout<< p <<endl;
    cout<<*p<<endl;
    *p=30;
    cout<<edad<<endl;

    return 0;
}