/*Cálculo de Raíces de una Ecuación Cuadrática: Crea un programa que calcule las raíces de una
ecuación cuadrática utilizando la fórmula general. Utiliza la función sqrt de la librería cmath para
calcular la raíz cuadrada. Solicita al usuario los coeficientes de la ecuación (a, b, c) y muestra las
raíces obtenidas. Considera los casos en los que las raíces son reales o complejas. */

#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
void raiz(float i, float j, float z, float& x1, float& x2){
	
	float d=pow(j,2)-4*i*z;
	
	if (d==0){
		x1=(-j+sqrt(d))/(2*i);
		x2=(-j-sqrt(d))/(2*i);
	}else if (d>0){
		x1=(-j+sqrt(d))/(2*i);
		x2=(-j-sqrt(d))/(2*i);
	}else{
		cout<<":";
	}
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	float a,b,c,x1=0,x2=0;
	float d=0;
	cout<<"INGRESE LOS COEFICIENTES DE LA SIGUIENTE EXPRESIÓN "<<endl;
	cout<<"ax^2 + bx + c = 0"<<endl;
	cout<<"INGRESE EL VALOR DE (a): "<<endl;
	cin>>a;
	cout<<"INGRESE EL VALOR DE (b): "<<endl;
	cin>>b;	
	cout<<"INGRESE EL VALOR DE (c): "<<endl;
	cin>>c;
	d=pow(b,2)-4*a*c;
	while (a==0){
		cout<<"NO ES UNA ECUACIÓN CUADRÁTICA";
		
		return 0;
	}
	system("cls");
	raiz(a,b,c,x1,x2);
	 cout<<"\n "<<a<<"x^2 "<<b<<"x + "<<c<<" = 0. \n\n";
	if (d==0 || d>0){
		cout<<"LA PRIMERA RAÍZ ES : "<<x1<<endl;
	cout<<"LA SEGUNDA RAÍZ ES : "<<x2<<endl;
	}else{
		cout<<"RACÍCES COMPLEJAS a +- bi";
	}
	
	return 0;

}