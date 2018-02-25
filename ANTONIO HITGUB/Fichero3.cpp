#include<fstream>
#include<iostream>

using namespace std;

int salir;
int main(){
    ifstream fichero("Ficero.txt");
    string mensaje;
    getline(fichero,mensaje);
    cout<<"La primera linea dice: ";
    cout<<mensaje;
    cin>>salir;
    }
