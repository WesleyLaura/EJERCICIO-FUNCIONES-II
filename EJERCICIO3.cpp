/*Cálculo de la Hipotenusa: Crea un programa que calcule la hipotenusa de un triángulo rectángulo
utilizando la fórmula de Pitágoras. Solicita al usuario los valores de los catetos y utiliza la función 
sqrt de cmath para calcular la raíz cuadrada de la suma de los cuadrados de los catetos. Muestra el
resultado de la hipotenusa calculada. */
#include <iostream>
#include <math.h>
using namespace std;

float calcular(float a, float b){
	return sqrt(pow(a,2)+pow(b,2));
}

int main(){
	float lado1,lado2,lado3;
	cout<<"INGRESE EL PRIMER CATETO: "<<endl;
	cin>>lado1;
	cout<<"INGRESE EL SEGUNDO CATETO: "<<endl;
	cin>>lado2;
	while (lado1<0 || lado2<0){
		cout<<"ERROR"<<endl;
		cout<<"INGRESE EL PRIMER LADO: "<<endl;
		cin>>lado1;
		cout<<"INGRESE EL SEGUNDO LADO: "<<endl;
		cin>>lado2;
	}	
	system("cls");
	lado3=calcular(lado1,lado2);
	cout<<"EL VALOR DE LA HIPOTENUSA ES: "<<lado3<<endl;
	
	return 0;
}