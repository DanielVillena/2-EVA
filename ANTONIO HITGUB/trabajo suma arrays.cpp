//vamos a aprender a hacer arrays
using namespace std;

#include<iostream>
int main(){
    int pepito[5];
    int cont;
    int suma=0;
    int salir;
    for(cont=0;cont<5;cont++){
       cout<<"dime un numero: ";
       cin>>pepito[cont];
    }
    cout<<"la suma vale: ";
    for(cont=0;cont<5;cont++){
    suma=suma+pepito[cont];
    }
        cout<<"toca cualquier tecla";
        cin>>salir;
        return 0;

}
