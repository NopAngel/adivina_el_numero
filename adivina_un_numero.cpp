#include <iostream>
#include <ctime>

int main() {

	int num;
	int adivinar;
	int intentos = 0;

	srand(time(NULL));

	num = rand() % 100 + 1; // Vuelve la variable a un número random (del 1 al 100)

	std::cout << "---------- Adivina el Número ----------.\n";

	do {

		std::cout << "Ingrese un número entre 1 y 100:";
		std::cin >> adivinar;

		intentos++;
		
		if (adivinar > num) {
			std::cout << "Más bajo.\n";
		}
		else if(adivinar < num) {
			std::cout << "Más alto\n";
		}
		else {
			std::cout << "Correcto! intentos:" << intentos << "\n";
		}

	} while (num != adivinar);

	return 0;
}