//vamos a aprender a hacer arrays
using namespace std;

#include<iostream>
int main(){
    int pepito[5];
    int cont;
    int salir;
    for(cont=0;cont<5;cont++){
       cout<<"dime un numero: ";
       cin>>pepito[cont];
    }
    cout<<"mira mi bonito vector relleno: ";
    for(cont=0;cont<5;cont++){
        cout<<"pepito["<<cout<<"]="<<pepito[cont];
    }
        cout<<"toca cualquier tecla";
        cin>>salir;
        return 0;

}
