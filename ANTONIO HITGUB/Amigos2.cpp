//este programa trata sobre la estructura
#include<iostream>
using namespace std;
int main(){
    //declaro un nuevo ipo de dato
    struct persona{
           string nombre;
           int edad;
           char colorPelo;
    };
    //declaro una variable tipo
    //persona
    int cont;
    persona amigo[3];
    for(cont=0;cont<3;cont++){
      cout<<"DATOS AMIGO "<<cont<<endl;
      cout<<"Como se llama tu amigo?: ";
      cin>>amigo[cont].nombre;
      cout<<"Que edad tiene?: ";
      cin>>amigo[cont].edad;
      cout<<"De que color tiene el pelo?: ";
      cin>>amigo[cont].colorPelo;
      }
}
