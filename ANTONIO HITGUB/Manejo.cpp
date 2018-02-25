//manejo de punteo
#include<stdio.h>
#include<stdlib.h>

int salir;
int main(){
    char *lista[3];
    lista[0]=(char *) malloc(8*sizeof(char));
    lista[1]=(char *) malloc(7*sizeof(char));
    lista[2]=(char *) malloc(9*sizeof(char));
    printf("\nPrimer rey mago: ");
    scanf("%s",lista[0]);
    printf("\nPrimer rey mago: ");
    scanf("%s",lista[1]);
    printf("\nPrimer rey mago: ");
    scanf("%s",lista[2]);
    printf("\nToca cualquier tecla: ");
    scanf("%i",&salir);   
    return 0;
}
