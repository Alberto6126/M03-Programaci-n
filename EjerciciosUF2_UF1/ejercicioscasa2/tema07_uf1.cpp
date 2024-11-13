#include<iostream>
#include<windows.h>
#include<queue>
#include"tema07_uf1.h"


int ej1() {
bool EjIsRunning = true; 
while (EjIsRunning) {
	
	std::queue<int> nums;
	bool userIsInserting = true;
	bool IsAsking = true;
	short userinput;

	/*1. Crea un programa que pida un n�mero al usuario, el programa almacenar�
	 el n�mero y seguidamente pedir� otro al usuario. Esto debe hacerse
	 infinitamente hasta que el usuario quiera, entonces el programa finalizar�
	 mostrando todos los n�meros introducidos.*/


#pragma region n�mero 
		userIsInserting = true;
		while (userIsInserting) {
			system("CLS");
			std::cout << "introduce un numero: ";
			std::cin >> userinput;
			if (userinput == -1) {
				userIsInserting = false;
			}
			if (userinput < -1) {
				system("CLS");
				std::cout << "ERROR, NUMEROS NEGATIVOS NO SON SOPORTADOS\n";
				Sleep(1000);
			}
			else if (userinput > -1) {
				nums.push(userinput);
			}
		}
#pragma endregion


#pragma region Impresi�n de la queue
		int i = 0;
		system("CLS");
		while (nums.empty() == false)
		{
			std::cout << "--------------------------------------------------------------------------\n";
			std::cout << "| Posicion " << i << ":	" << nums.front() << "	| Posicion de memoria asignada:	" << &nums.front() << "|\n";
			nums.pop();
			i++;
		}
		std::cout << "--------------------------------------------------------------------------\n";
		std::cout << "Quieres cerrar este programa y volver al menu principal?\n-1- Si\n-2- No";
		while (IsAsking) {
			std::cin >> userinput;
			if (userinput == 1) {
				IsAsking = false;
				EjIsRunning = false;
			}
			else if (userinput == 2) {
				IsAsking = false;
			}
			else if (userinput != 1 && userinput != 2) {
				std::cout<<"Porfavor, inserta uno de los valores indicados"; 
			}
				
		}

	}

	return 0;
#pragma endregion

}