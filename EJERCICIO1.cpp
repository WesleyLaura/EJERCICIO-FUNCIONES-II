/*Cálculo del Área de un Círculo: Implementa un programa que calcule el área de un círculo dado su
radio. Utiliza la constante M_PI de la librería cmath para obtener el valor de pi. Solicita al usuario el
radio del círculo y utiliza la función pow de cmath para calcular el cuadrado del radio. Muestra el
resultado del área calculada. */

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main(){
	
	SetConsoleOutputCP(CP_UTF8);
	
	 float radio,area;
	 double pi;
	 pi=M_PI;
	 cout<<"INGRESE EL RADIO DEL CÍRCULO: "<<endl;
	 cin>>radio;
	 area=	pi*pow(radio,2);
	 
	 system("cls");
	 
	cout<<"EL ÁREA DEL CÍRCULO ES: " <<area<<endl;
	
	return 0;
}