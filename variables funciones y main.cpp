#include <iostream> // algo de lo que por ahora no te tendras que preocupar c:
#include <stdio.h>
using namespace std;

// lo que escriba despues de "//" es un comentario. los cuales son ignorados por la maguina y puedes poner cuantos tu quieras C:
// solo encargate de que no te acaparen todo el programa :)
// las usare durante todo lo que te nesecite decir. si los pones entre "///" la letra se pondra mas invisible para que no te estorve
// en mi caso las usare asi para que las veas con claridad
/// por ejemplo esta

// ahora vamos con algo muy importante. las variables. estas se almacenan en memoria como datos
int numero_entero = 10; // ahora la variable numero entero tiene un valor de dies

void funcion()
{
	// bien bien... bamos a crear una funcion, esto lo que hara es que donde lo pongas se ejecutara
	cout << "nuestro numero entero es: " << numero_entero << endl; // endl da un salto de linera para no tener todo juntito c:
}

void funcion2(const char mensaje[10])
{
	// a estas se le pueden poner parametros en esste caso el mensaje que queremos cargar
	printf("%s\n", mensaje);
	// que RAYOS significa %s. lo que hace es dar un espacio en la funcion para poner un texto
	// tambien \n es lo mismo que endl solo que para la funcion printf
}

int main() // la funcion principal. para no darte mucho texto. es lo primero que pasa en el programa
{
	cout << "Hola C:" << endl; // funcion para dar un mensaje en el programa. en este caso : Hola C:
	cin.get(); // esto lo que hara es crear una sobre tencion que hara que el  programa recien lo prendas. no se cierre

	funcion(); // ahora se ejecutara la funcion que acabas de poner :D
	funcion2("hola que tal");
	return EXIT_SUCCESS; // retornara "0" al systema.. para pocas oalabras. le dira al programa : todo bien. ya termine. puedes cerrarte c:
}

