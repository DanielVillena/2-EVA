// Lectura de unafrase de un fichero
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
ifstream ficha("prueba.txt");
string linea;
while(! ficha.eof())
{
	getline (ficha,linea);
	 cout<< linea << endl;
}
ficha.close();
return 0;
}
