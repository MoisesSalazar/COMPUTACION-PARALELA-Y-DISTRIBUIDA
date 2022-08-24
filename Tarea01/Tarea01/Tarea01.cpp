// Tarea01.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <ctime>
using namespace std;


void prueba1(int MAX) {
	
	unsigned t0, t1;
	
	double** A = new double* [MAX];
	
	for (int i = 0; i < MAX; i++) {
		A[i] = new double[MAX];
	}
	
	double* x = new double[MAX];
	double* y = new double[MAX];

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			A[i][j] = 0;
		}
	}

	for (int i = 0; i < MAX; i++)
	{
		y[i] = 0;
	}

	t0 = clock();

	for (int i = 0; i < MAX; i++)
	{
		for (int j = 0; j < MAX; j++)
		{
			y[i] += A[i][j] * x[j];
		}
	}

	t1 = clock();

	double time = (double(t1 - t0) / CLOCKS_PER_SEC);
	cout << "Execution Time: " << time << endl;

	for (int i = 0; i < MAX; i++)
	{
		y[i] = 0;
	}

	t0 = clock();

	for (int j = 0; j < MAX; j++)
	{
		for (int i = 0; i < MAX; i++)
		{
			y[i] += A[i][j] * x[j];
		}
	}

	t1 = clock();

	time = (double(t1 - t0) / CLOCKS_PER_SEC);
	cout << "Execution Time: " << time << endl;
}
int main()
{
	int TAM = 1000;
	for (int i = 0; i < 10; i++)
	{
		cout << "PARA MAX DE TAM: " << TAM << endl;
		prueba1(TAM);
		TAM += 1000;
		cout << endl;
	}


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
