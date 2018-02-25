//ficheros
#include<iostream>
#include<fstream>

using namespace std;
 int salir;
 int main(){
     //abrimos el fichero
   ofstream fichero("fichero.txt");
   fichero<<"estamos en clase de TIC"<<endl;
   fichero<<"es muy divertido";
   fichero.close();
   cout<<"ya esta cerrado";
   cin>>salir;
     return 0;
 } 
