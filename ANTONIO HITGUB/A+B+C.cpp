#include<iostream>

int main (){
    //Definicion de variables//
    int a;
    int b;
    int c;
    int solucion, salir;
    //Identificacion variables//
    a=2;
    b=4;
    c=-1;
    solucion=a+b+c;
    std::cout<< "La solucion es: "<<solucion <<std::endl;
    std::cout<< "Para salir, toca cualquier tecla y después pulsa enter";
    std::cin>> salir;
    return 0;
}
