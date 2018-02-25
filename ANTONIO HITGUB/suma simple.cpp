#include<iostream>

int main(){
    //definicion variables//
    int a;
    int b;
    int c;
    int solucion,salir;
    //iniciacion de variables//
    a=2;
    b=4;
    c= 1;
    solucion=a+b+c;
    std::cout<<"la solucion es: " << solucion << std::endl ;
    std::cout<<"para seguir,toca cualquier tecla";
    std::cin>> salir;
    return 0;

}   
