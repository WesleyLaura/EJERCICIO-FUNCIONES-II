/*Cálculo de Raíces de una Ecuación Cuadrática: Crea un programa que calcule las raíces de una
ecuación cuadrática utilizando la fórmula general. Utiliza la función sqrt de la librería cmath para
calcular la raíz cuadrada. Solicita al usuario los coeficientes de la ecuación (a, b, c) y muestra las
raíces obtenidas. Considera los casos en los que las raíces son reales o complejas. */

#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;


int main(){
	SetConsoleOutputCP(CP_UTF8);
	float a,b,c,x1=0,x2=0;
	float d=0,q,r;
	cout<<"INGRESE LOS COEFICIENTES DE LA SIGUIENTE EXPRESIÓN "<<endl;
	cout<<"ax² + bx + c = 0"<<endl;
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
	d=pow(b,2)-4*a*c;
	
	if (d==0){
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
	}else if (d>0){
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
	}else{
		x1=(sqrt(-d))/(2*a);
		r=-b/2*a;
		x2=(sqrt(-d))/(2*a);
		q=-b/2*a;
		
		cout<<"LAS RAÍCES COMPLEJAS SON: "<<endl;
		cout<<r<<" + "<<x1<<"i"<<"\n"<<q<<" - "<<x2<<"i"<<endl;
		return 0;
		
	}
	 cout<<"\n "<<a<<"x² "<<b<<"x + "<<c<<" = 0. \n\n";
	 cout<<"LAS RAÍCES SON:"<<x1<<","<<x2<<endl;

	return 0;

}