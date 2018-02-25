//Lectura hasta el final
#include<iostream>
#include<fstream>
using namespace std;
int fichero;
int salir;
int main(){
    string linea;
    ifstream fichero("ficero.txt");
    while(fichero.eof()==0){
      getline(fichero,linea);
      cout<<linea<<endl;
    }
    fichero.close();
    cin>>salir;
    return 0;
}
            
