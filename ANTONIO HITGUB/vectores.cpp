//vectores imposibles
#include<iostream>
using namespace std;
int main(){
    int vect_1[5];
    int vect_2[5];
    int vect_t[5];
    int cont;
    int salir;
    //buscamos los vectores preguntando//
        for(cont=0;cont<5;cont++){
          cout<<"vector_1["<<cont<<"]=";
          cin>>vect_1 [cont];
        }
        for(cont=0;cont<5;cont++){
          cout<<"vector_2["<<cont<<"]=";
          cin>>vect_2 [cont];
        }
        //ponerlos en pantalla
        cout<<"tu vector es = ";
        cout<<"[";
        for (cont=0;cont<5;cont++){
          vect_t[cont]=vect_1[cont]+vect_2[cont];
          if(cont==4){
             cout<<vect_t[cont];
          }
          else{
              cout<<vect_t[cont]<<"," ;  
          }
         
        }
        cout<<"]";
  
    cout<<endl<<"pulsa algo para salir";
    cin>> salir;
    return 0;
}
      
