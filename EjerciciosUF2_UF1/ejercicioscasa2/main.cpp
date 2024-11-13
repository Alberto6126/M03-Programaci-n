#include <iostream>
#include <windows.h>
#include <time.h>
#include<queue>



static void ej1() {
	std::queue<int> nums;
	bool userIsInserting = true;
	int userInput;

	/*1. Crea un programa que pida un número al usuario, el programa almacenará
	 el número y seguidamente pedirá otro al usuario. Esto debe hacerse
	 infinitamente hasta que el usuario quiera, entonces el programa finalizará
	 mostrando todos los números introducidos.*/


#pragma region número 

		while (userIsInserting) {
			system("CLS");
			std::cout << "introduce un numero: ";
			std::cin >> userInput;
			if (userInput == -1) {
				userIsInserting = false;
			}
			if (userInput < -1) {
				system("CLS");
				std::cout << "ERROR, NUMEROS NEGATIVOS NO SON SOPORTADOS\n";
				Sleep(1000);
			}
			else if (userInput > -1) {
			nums.push(userInput);
			}
		}
#pragma endregion


#pragma region Impresión de la queue
		int i = 0;
		system("CLS");
		while (nums.empty() == false)
		{
			std::cout << "--------------------------------------------------------------------------\n";
			std::cout << "| Posicion " << i << ":	" << nums.front() << "	| Posicion de memoria asignada:	" << &nums.front() <<"|\n"; 
			nums.pop();
			i++; 
		}
		std::cout << "--------------------------------------------------------------------------\n";

#pragma endregion

}

static void menu() {
	short userinput_menu;
std::cout << "--------------------------------------------------------------------------------------------------------\n";
std::cout << "--------------------------------------------------------------------------------------------------------\n";
std::cout<<" 	___                                                                          ___       \n";
std::cout<<" 	| |.-.   ( __)   .--.    ___ .-.    ___  ___    .--.    ___ .-.   ( __)   .-.| |    .--.   \n";
std::cout<<" 	| /   \\  ('' )  /    \\  (   )   \\  (   )(   )  /    \\  (   )   \\  ('' )  /   \\ |   /    \\  \n";
std::cout<<" 	|  .-. |  | |  |  .-. ;  |  .-. .   | |  | |  |  .-. ;  |  .-. .   | |  |  .-. |  |  .-. ; \n";
std::cout<<" 	| |  | |  | |  |  | | |  | |  | |   | |  | |  |  | | |  | |  | |   | |  | |  | |  | |  | | \n";
std::cout<<" 	| |  | |  | |  |  |/  |  | |  | |   | |  | |  |  |/  |  | |  | |   | |  | |  | |  | |  | | \n";
std::cout<<" 	| |  | |  | |  |  ' _.'  | |  | |   | |  | |  |  ' _.'  | |  | |   | |  | |  | |  | |  | | \n";
std::cout<<" 	| '  | |  | |  |  .'.-.  | |  | |   ' '  ; '  |  .'.-.  | |  | |   | |  | '  | |  | '  | | \n";
std::cout<<"	' `-' ;   | |  '  `-' /  | |  | |    \\ `' /   '  `-' /  | |  | |   | |  ' `-'  /  '  `-' / \n";
std::cout<<" 	 `.__.   (___)  `.__.'  (___)(___)    '_.'     `.__.'  (___)(___) (___)  `.__,'    `.__.'  \n";
std::cout << "--------------------------------------------------------------------------------------------------------\n"; 
std::cout << "--------------------------------------------------------------------------------------------------------\n";

	std::cin >> userinput_menu;
	switch (userinput_menu) {
	case 1: ej1(); break;
	




	}

}

void main() {
	menu(); 




} 

