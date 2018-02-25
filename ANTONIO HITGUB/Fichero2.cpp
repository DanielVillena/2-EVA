#include<iostream>
#include<fstream>

using namespace std;
int salir;
int main(){
    string mensaje;
    ifstream fichero("fichero.txt");
    fichero>>mensaje;
    cout<<mensaje<<endl;
    fichero.close();//no es obligatorio
    cin>>salir;
    return 0;
}
    
