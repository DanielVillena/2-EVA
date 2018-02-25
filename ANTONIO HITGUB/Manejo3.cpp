//manejo de punteo
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int l;
int salir;
int medida;
int cont;
char aux[15];
int main(){
    char *lista[5];
    for(cont=0;cont<5;cont++){
       printf("\nNombre amigo %i; ",cont);
       scanf("%s",aux);
       l=15;//1=medida(aux);
       lista[cont]=(char *)malloc(l*sizeof(char));     
       strcpy(lista[cont],aux);                 
    }
    printf("\nToca cualquier tecla: ");
    scanf("%i",&salir);   
    return 0;
}
