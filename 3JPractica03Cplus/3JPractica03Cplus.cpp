// 3JPractica03Cplus.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <cstdlib>
#include <iostream>
#define maxf 3
#define maxc 5
using namespace std;
int main(int argc, char* argv[])
{
	float a[maxf][maxc];
	int f, c;
	// Escribir el array
	for (f = 0; f < maxf; f++)
	{
		for (c = 0; c < maxc; c++) {
			cout << "Ingrese un Valor: ";
			cin >> a[f][c];
		}
	}
	// Leer el array
	for (f = 0; f < maxf; f++)
	{
		for (c = 0; c < maxc; c++) {
			cout << "El Valor leido es: ";
			cout << a[f][c];
			cout << endl;
		}
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
