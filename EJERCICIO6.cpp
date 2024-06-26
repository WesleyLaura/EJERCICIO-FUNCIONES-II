/*Juego de Piedra, Papel y Tijeras: Desarrolla un programa que simule el juego de piedra, papel y
tijeras contra la computadora. El usuario elegirá su jugada (piedra, papel o tijeras) y la computadora
generará su jugada de forma aleatoria. El programa determinará el ganador de cada ronda según las
reglas del juego. El juego continuará hasta que el  usuario o la computadora gane 3 rondas. Muestra el
resultado final indicando el ganador del juego. */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>


using namespace std;

void menu(){
	SetConsoleOutputCP(CP_UTF8);
	int op;
	int generador;
	int contador1=0;
	int contador2=0;
	string selec1;
	string selec2;

	do {
		system("cls");
		cout<<"______________________JUEGO DE PIEDRA, PAPEL Y TIJERAS________________________"<<endl;
		cout<<"1. ESCOGA LA OPCIÓN UNO SI DESEA ESCOGER PIEDRA"<<endl;
		cout<<"2. ESCOGA LA OPCIÓN DOS SI DESEA ESCOGER PAPEL"<<endl;
		cout<<"3. ESCOGA LA OPCIÓN TRES SI DESEA ESCOGER TIJERA"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				selec1="PIEDRA";
				break;
			case 2:
				selec1="PAPEL";
				break;
			case 3:
				selec1="TIJERA";
				break;
			default:
				cout<<"ERROR"<<endl;
				
				return;
		}
		
		switch(generador){
			case 1:
				selec2="PIEDRA";
				break;
			case 2:
				selec2="PAPEL";
				break;
			case 3:
				selec2="TIJERA";
				break;
		}
	
	generador=rand()% 3 + 1;
		
	 if ( generador==1 && op==2 || generador==2 && op==3  || generador==3 && op==1){
	 	system("cls");
	 	cout<<"COMPUTADORA :"<<selec2<<endl;
	 	cout<<"USUARIO :"<<selec1<<endl<<endl;
	 	cout<<"GANASTE MI CHUPETÍN"<<endl<<endl;
	 		contador1++;
	 	
	 		}else if (generador==1 && op==3 || generador==2 && op==1  || generador==3 && op==2) {
	 			system("cls");
	 			cout<<"COMPUTADORA :"<<selec2<<endl;
	 			cout<<"USUARIO :"<<selec1<<endl<<endl;
	 			cout<<"PERDISTE MI ESTIMADO CHUPETÍN"<<endl<<endl;
	 				contador2++;
	 			
			 }else if ( generador==op){
			 	system("cls");
					cout<<"COMPUTADORA :"<<selec2<<endl,
	 				cout<<"USUARIO :"<<selec1<<endl<<endl;
					cout<<"EMPATE"<<endl<<endl;
					
		           }
		           
		           cout<<"PUNTAJE COMPUTADORA : "<<contador2<<endl;
		           cout<<"PUNTAJE USUARIO : "<<contador1<<endl<<endl;
		           system("pause");
	}while (contador1!=3 && contador2!=3);
	cout<<"TERMINÓ LA PARTIDAD MI CHUPETÍN"<<endl;

	return;
}

int main(){
		SetConsoleOutputCP(CP_UTF8);
	srand(time(0));
	menu();
			return 0;
} 