#include <iostream>
using namespace std;

void intercambio(int *a,int *b){
    int temporal = *a;
    *a=*b;
    *b=temporal;
}


int main (){
    int x=5;
    int y=10;
    cout<<"Antes: x= "<<x<<", y= "<<y<<endl;
    intercambio(&x,&y);
    cout<<"Despues: x= "<<x<<", y= "<<y<<endl;
    return 0;
}