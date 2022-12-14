#include <iostream>
using namespace std;
void get_divisores(int numero,int indice);
int main()
{
	int numero;

	cout << "Ingresar numero:";
	cin >> numero;
	cout << "DIVISORES DEL NUMERO:\n";

	get_divisores(numero,1);
}
void get_divisores(int numero,int indice)
{
	if (indice==numero)
	{
		cout << numero;
	}
	else
	{
		if (numero % indice == 0)
		{
			cout << indice << endl;

		}
		get_divisores(numero, indice + 1);

	}
}

