

//MANEJO MEMORIA EXAMEN
#include<stdio.h>
#include<iostream>

using namespace std;
int salir;
char palabra1[5];
char palabra2[5];
int main(){
    printf("Dime algo: ");
    scanf("%s",palabra1);//scanf para almacenar en memoria
    printf("\nDime algo mas: ");//\n para bajar al siguiente
    scanf("%s",palabra2);// %s cadena de caracteres
    printf("Gacias por decir: \n");
    printf("  %x",palabra1);//%x numero hexadecimal
    printf("  %c\n",*(palabra1+1));//ponerlo entre parentesis y sumar para elegir la letra que quieras // %c letra
    printf("  %x",palabra2);//%x dice la direccion de la palabra
    printf("  %c",*palabra2);//se usa "c" para que vaya letra a letra y "*" para que empiece
    scanf("%i",&salir); //%i = numero entero
    return 0;
}
