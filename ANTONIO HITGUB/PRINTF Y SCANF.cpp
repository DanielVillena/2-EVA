#include <stdio.h> //nombre de la biblioteca es = siempre
int main(){
	int num1 = 10;
	char mensaje[] = "Hola"; //char es usado para guardar palabra
 
	printf("%s, soy el número %d. \n", num1, mensaje); //printf es = a cout. %s=num1 porque lo pone al final y %d=mensaje
 
	return 0;
}

%d numero entero
%f numero real
%c caracter
%s cadena de texto

#include <stdio.h>
int main(){
	char nombre[12];
 
	printf("Introduce tu nombre: ");
	fflush(stdout); //Vaciar el buffer de salida
	scanf("%s",nombre); //scanf sirve para obtener una variable del usuario
 
	printf("Hola, %s :)\n", nombre);
 
	return 0;
}

