#include <iostream>
using namespace std;

int v=0;

int main()
{
	// ahora sigue los que pasaria si?.
	// estos con tu ayuda determinan que si algo esta sucediendo. ellos que haran al respecto
	int edad;
	cout << "cuantos años tienes"<<endl;
	cin >> edad;
	if (edad < 13) // if es para darte cuenta si lo que esta en los parentesis es verdadero
	{
		cout << "tas muy chikito para la montaña rusa";
		cin.get();
	}
	else // else es para darse el caso de que lo de arriba es falso
	{
		cout << "puedes pasar :)";
		cin.get();
	}
}

// tambien existe el for el cual existe para ejecutar cierto numero de veces lo que quieras :)

void usando_for()
{
	for (int i = 0;//inicializacion
		i < 20;// algo parecido al if
		i++) // y actualizacion 
	{
		// en este caso se le sumara gradualmente a el int v
		v++;
	}
}

// ahora es el turno del while. este repetira y repetira una accion hasta que un evento deje de ser verdadero

void usar_while()
{
	bool h=true;
	while (h)// aqui si quieres qye si o si se ejecute este bucle y nunca pare puedes poner while(true)
	{
		cout << "hola";
		system("cls");
		//esto constantemente esta pintando y despontando hasta el ininito y mas halla
	}
}
