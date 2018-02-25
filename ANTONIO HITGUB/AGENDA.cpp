#include<iostream>
#include<fstream>
using namespace std;
int amigos;
int cont;
int salir;

int main(){
    struct agenda{
           string nombre;
           string localidad;
           int codigo_postal;
           int telefono;
           char sexo;
 };

         cout<<"Cuantos amigos tienes?: ";
         cin>>amigos;
         agenda amigo[amigos];

         for(cont=0;cont<amigos;cont++){
                  cout<<"Datos amigo "<<cont+1<<":"<<endl; 
                  cout<<"Nombre         --> ";
                  cin>>amigo[cont].nombre;
                  cout<<"Localidad      --> ";
                  cin>>amigo[cont].localidad;
                  cout<<"Codigo postal  --> ";
                  cin>>amigo[cont].codigo_postal;
                  cout<<"Telefono       --> ";
                  cin>>amigo[cont].telefono;
                  cout<<"Sexo           --> ";
                  cin>>amigo[cont].sexo;
                  
                  
}



 ofstream file("Agenda.txt");
 for(cont=0;cont<amigos;cont++){
      file<<"Datos amigo "<<cont+1<<endl;
      file<<"- Nombre --> "<<amigo[cont].nombre<<endl;
      file<<"- Localidad --> "<<amigo[cont].localidad<<endl;
      file<<"- Codigo postal --> "<<amigo[cont].codigo_postal<<endl;
      file<<"- Telefono	--> "<<amigo[cont].telefono<<endl;
      file<<"- Sexo	--> "<<amigo[cont].sexo<<endl;
      }
      file.close();
   return 0;
}

      
