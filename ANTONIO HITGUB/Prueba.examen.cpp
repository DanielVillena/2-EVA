#include<iostream>

using namespace std;
int posicion;
int main();
char *ganadores[3];
for(posicion=0;posicion<3;posicion++){
   ganadores[posicion]=(char*) malloc(10*sizeof(char));//resevar memoria(malloc)
}
 strcpy(ganadores[0],"Amaia");
 strcpy(ganadores[1],"Aitana");
 strcpy(ganadores[2],"Miriam");
