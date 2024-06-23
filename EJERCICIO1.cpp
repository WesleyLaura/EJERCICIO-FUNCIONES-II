/*Cálculo del Área de un Círculo: Implementa un programa que calcule el área de un círculo dado su
radio. Utiliza la constante M_PI de la librería cmath para obtener el valor de pi. Solicita al usuario el
radio del círculo y utiliza la función pow de cmath para calcular el cuadrado del radio. Muestra el
resultado del área calculada. */

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

double area(int r){
	double pi=M_PI;
	return pi*pow(r,2);
}

int main(){
	
	SetConsoleOutputCP(CP_UTF8);
	
	 double radio,Area;
	 
	 cout<<"INGRESE EL RADIO DEL CÍRCULO: "<<endl;
	 cin>>radio;
	 while(radio<0){
	 	cout<<"ERROR\nINGRESE EL VALOR DEL RADIO CORRECTO: "<<endl;
	 	cin>>radio;
	 }
	 Area=area(radio);
	 system("cls");
	 
	cout<<"EL ÁREA DEL CÍRCULO ES: " <<Area<<endl;
	
	return 0;
}