#include<fstream>
#include<iostream>

using namespace std;

int salir;
int main(){
    ifstream fichero("ficero.txt");
    string mensaje;
    cout<<"el texto dice: "<<endl;
    while(fichero.eof()!=1){
      if (fichero.eof()!=1){
         getline(fichero,mensaje);
          cout<<mensaje;
          cout<<endl;
       }
       }
    cin>>salir;
    return 0;
    }
