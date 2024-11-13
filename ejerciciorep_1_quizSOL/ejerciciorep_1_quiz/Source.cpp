#include <iostream>
#include <string>
#include <list>
#include <random>


short menu() {
	short imput;
	std::cout << "Bienvenido, Que quieres hacer?\n-1-Jugar\n-2-Salir\n";
	std::cin >> imput;
	while (imput != 1 && imput != 2){
		std::cout << "error, introduce un valor correcto: ";
		std::cin >> imput;
	}
	if (imput == 2) {
		return 0;
	}
	return 1;
}


short preguntas() {
	srand(time(NULL));
	short pregunta_rand;
	bool pregunta_comprob[10] = { 1,1,1,1,1,1,1,1,1,1 };
	bool preguntas_loop = true;
	short respuesta_user;
	short n_preguntas = 0;
	short punt = 0;
	bool racha = false;
	short cuenta_racha = 0;
	bool verificador_racha = false;
	std::string pregunta_quiz[10] = { 
		"Quien fue el pintor famoso que pinto la Mona Lisa?\n -1- Leonardo da Vinci\n -2- Michelangelo\n -3- Rafaelo\n -4- Caravaggio\n",
		"Que es el Planeta rojo?\n -1- Tierra\n -2- Marte\n -3- Jupiter\n -4- Saturno\n",
		"Quien fue el escritor que escribio El Señor de los Anillos? \n -1- William Shakespeare\n -2- Charles Dickens\n -3- Tokien\n -4- J.K. Rowling\n",
		"Que elemento quimico se encuentra en la tabla periodica con el simbolo H?\n -1- Helio\n -2- Oxigeno\n -3- Carbono\n -4- Hidrogeno\n",
		"Quien fue el lider estadounidense que firmo la Declaracion de la Independencia?\n -1- George Washington\n -2- Benjamin Franklin\n -3- Thomas Jefferson\n -4- Abraham Lincoln\n",
		"Quien es el director de la pelicula ET, el extraterrestre?\n -1- Steven Spielberg\n -2- James Cameron\n -3- Martin Scorsese\n -4- Woody Allen\n",
		"Que es el instrumento musical que se toca soplando a traves de un tubo?\n -1- Piano\n -2- Guitarra\n -3- Flauta\n -4- Trompeta\n",
		"Que es el famoso rio que bordea a la ciudad de Paris?\n -1- Tajo\n -2- Nilo\n -3- Guadiana\n -4- Siena\n",
		"Quien fue el cientifico que teorizo sobre la evolucion de las especies?\n -1- Darwin\n -2- Descartes\n -3- Emiliano Zamora de la Barca\n -4- Robert Downley. Jr\n",
		"Quien es el inventor del telefono?\n -1- Alexander Graham Bell\n -2- Thomas Edison\n -3- Nikola Tesla\n -4- Guglielmo Marconi\n"
	};
	short respuesta_quiz[10] = { 1,2,3,4,1,1,3,4,1,2 }; //por aqui
	short pregunta_quiz_length = sizeof(pregunta_quiz) / sizeof(pregunta_quiz[0]);
	while(preguntas_loop)
	{
		system("CLS");
		pregunta_rand = rand() % 10;
		while (pregunta_comprob[pregunta_rand] == true) {
			pregunta_comprob[pregunta_rand] = false; 
			std::cout << " __________________________" << "\n|" << pregunta_quiz_length << "  | ";
			for (short i = 0; i < 10; i++)
			{
				std::cout << pregunta_comprob[i] << " ";
			}
		
			std::cout << "|		Puntuacion:" << punt <<"\n-------------------------- - " << "\n" << pregunta_quiz[pregunta_rand];
			std::cin >> respuesta_user;
			if (respuesta_user == respuesta_quiz[pregunta_rand]) {
				punt++;
				if (racha) {
					cuenta_racha=cuenta_racha++;
					punt = punt + cuenta_racha;
				}
				racha = true;
			}
			else if (respuesta_user != respuesta_quiz[pregunta_rand]&&punt!=0) {
				punt --;
				racha = false;
				cuenta_racha = 0;

			}
			n_preguntas++;
		} 
		if (n_preguntas == 10) {
			preguntas_loop = false;
		}
		
	}
	return punt;

}

void final_partida(short puntuacion) {
	system("CLS");
	std::string preguntas_final[] = { "Cuanto es 1+6?", "cuanto cuesta un coche de 3000 euros?" };
	int preguntas_final_resp[] = { 7,3000 };
	bool preguntas_loop;
	int user_final;
	bool rand_iter = rand() % 2;
	while (preguntas_loop)
	{
		system("CLS");
		std::cout << preguntas_final[rand_iter];
		std::cin >> user_final;
		if (user_final != preguntas_final_resp[rand_iter]) {
			std::cout << "HAS SUSPENDIDO";
		}
		else {
			std::cout << "HAS APROBADO";
		}
	}


void main() {
	if (menu()== 1) {
		short puntuacion = preguntas();
		final_partida(puntuacion);

	}

}