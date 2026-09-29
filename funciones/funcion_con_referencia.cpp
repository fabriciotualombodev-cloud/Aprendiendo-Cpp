#include <iostream>
using namespace std;

void intercambiarNumeros(int &a,int &b){
    int temp=0;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=5, y=10;
    intercambiarNumeros(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}