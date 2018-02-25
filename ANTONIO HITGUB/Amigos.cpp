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
    persona amigo1;
    persona amigo2;
    persona amigo3;
    cout<<"Como se llama tu amio?: ";
    cin>>amigo1.nombre;
    cout<<"Que edad tiene?: ";
    cin>>amigo1.edad;
    cout<<"De que color tiene el pelo?: ";
    cin>>amigo1.colorPelo;
}
