#include <iostream>
using namespace std;

string texto = "hola que tal"; // variable de texto
// opcionalmente tambien puedes usar
char texto2[20] = "hola que tal";

// variables de numeros:
int numero = 10;// numero entero/natural
float decimal = 4.2f;// numero decimal
double decimal2 = 8.2;// la mismo. un decimal pero a este no es neseario ponerle "f" al final

int main()
{
	cout << "string: " << texto << endl
		<< "char[]: " << texto2 << endl
		<< "int: " << numero << endl
		<< "decimales: " << decimal << ',' << decimal2;
	return EXIT_SUCCESS;
}
