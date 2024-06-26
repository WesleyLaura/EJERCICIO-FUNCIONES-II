/*Generador de Números Aleatorios: Crea un programa que genere y muestre una serie de números
aleatorios entre 0 y un número máximo especificado por el usuario. El programa solicitará al usuario
la cantidad de números aleatorios que desea generar y el valor máximo permitido. Utiliza la función 
rand de la librería cstdlib para generar los números aleatorios.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;
 int main(){
 	SetConsoleOutputCP(CP_UTF8);
 	int nummaximo, cantidad;
 	srand(time(0)); // Inicializa el generador de números aleatorios
 	
 	cout<<"INGRESE LA CANTIDAD DE NÚMEROS QUE DESEA GENERAR: "<<endl;
 	cin>>cantidad;
 	cout<<"INGRESE EL NÚMERO MÁXIMO: "<<endl;
 	cin>>nummaximo;
 	
	
 	cout<<"LOS NÚMERO GENERADOS SON :"<<endl;
 	for(int i=0;i<cantidad;i++){
 		int numeroMagico = rand()%(nummaximo+1);
 		cout<<numeroMagico<<" ";
	 }
 	
 	return 0;
 }