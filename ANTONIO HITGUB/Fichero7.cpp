//Lectura hasta el final
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int fichero;
int salir;
int repetir=0;
int main(){
    string linea;
    string nombre;
    cout<<"Dime la ruta del fichero: ";
    do{
    getline(cin,nombre);
    ifstream fichero(nombre.c_str());
    if(fichero.fail()==1){
       cout<<"ERROR.No existe la ruta"; 
       cin>>salir;
       repetir=1;
    }else{
          repetir=0;
    }
    }while(repetir==1);
    while(fichero.eof()==0){
      getline(fichero,linea);
      cout<<linea<<endl;
    }
    fichero.close();
    cin>>salir;
    return 0;
}
            
