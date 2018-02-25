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
    printf("\nSegundo rey mago: ");
    scanf("%s",lista[1]);
    printf("\nTercer rey mago: ");
    scanf("%s",lista[2]);
    printf("\nLOS TRES REYES MAGOS SON: ");
    printf("%s, ",lista[0]);
    printf("%s y ",lista[1]);
    printf("%s.",lista[2]);
    printf("\nToca cualquier tecla: ");
    scanf("%i",&salir);   
    return 0;
}
