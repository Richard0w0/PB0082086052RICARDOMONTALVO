#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <vector>

using namespace std;

//Funciones del menu
void Agendar();
void Listas();
void Modificar();
void Eliminar();
void Salida();

//Punteros
int* price;
int* unitprice;
int* unitcant;
int* subtotal;
int* total;
int* id = 0;
string* hora;
string* name;
string* trat;
float iva = 0.16;
int nreg;

int main()
{
	//Variables
	int opcion;

	cout << "\t Bienvenido a Odontologia Smily" << endl;
	cout << "\t A continuacion nuestro menu de opciones:" << endl;
	cout << "\t 1.- Agendar una cita" << endl;
	cout << "\t 2.- Modificar una cita" << endl;
	cout << "\t 3.- Eliminar una cita" << endl;
	cout << "\t 4.- Lista de citas vigentes" << endl;
	cout << "\t 5.- Limpiar pantalla" << endl;
	cout << "\t 6.- Salir" << endl;
	cin >> opcion;

	switch (opcion)
	{
	case 1:
		Agendar();
		return main();
		break;

	case 2:
		Modificar();
		return main();
		break;

	case 3:
		Eliminar();
		return main();
		break;

	case 4:
		Listas();
		return main();
		break;

	case 5:
		system("cls");
		return main();
		break;

	case 6:
		Salida();
		break;

	}
}

//FUNCION PARA DAR DE ALTA UNA CITA
void Agendar()
{
	cout << "Ingrese la cantidad de citas que desea dar de alta" << endl;
	cin >> nreg;

	price = new int[nreg];
	unitprice = new int[nreg];
	unitcant = new int[nreg];
	unitcant = new int[nreg];
	subtotal = new int[nreg];
	total = new int[nreg];
	hora = new string[nreg];
	name = new string[nreg];
	trat = new string[nreg];

	for (int i = 0; i < nreg; i++)
	{
		cout << "Si desea agendar una cita por favor introduzca los siguientes datos:" << endl;
		while (getchar() != '\n');
		cout << "Ingrese el nombre del paciente: " << endl;
		getline(cin, name[i]);
		cout << "Agendar hora de la cita en formato hh:mm " << endl;
		cin >> hora[i];
		while (getchar() != '\n');
		cout << "Motivo de la cita: " << endl;
		getline(cin, trat[i]);
		cout << "Precio del tratamiento" << endl;
		cin >> unitprice[i];
		cout << "cantidad del tratamiento" << endl;
		cin >> unitcant[i];
		subtotal[i] = unitcant[i] * unitprice[i];
		total[i] = subtotal[i] + (subtotal[i] * 0.16);
		cout << "Precio total: " << total[i] << endl;

	}
}

//FUNCION PARA MODIFICAR UNA CITA
void Modificar()
{
	int j;
	int opcion;
	cout << "ingrese el numero de cita que desea modificar: ";
	cin >> j;
	j = j - 1; // esto debido a que i inicia en 0
	cout << "Ingrese que desea modificar: " << endl;
	cout << "1.- Nombre" << endl;
	cout << "2.- Motivo de la cita:" << endl;
	cout << "3.- Costo del tratamiento:" << endl;
	cout << "4.- Cantidad de citas:" << endl;
	cout << "5.- Hora de la cita:" << endl;
	cin >> opcion;

	switch (opcion)
	{
	case 1:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			cout << "Ingrese el nombre" << endl;
			getline(cin, name[i]);
		}
		break;

	case 2:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			cout << "Ingrese el motivo de la cita" << endl;
			getline(cin, trat[i]);
		}
		break;

	case 3:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese el precio de la cita" << endl;
			cin >> unitprice[i];
		}
		break;

	case 4:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese la cantidad de citas" << endl;
			cin >> unitcant[i];
		}
		break;

	case 5:
		for (int i = j; i == j; i++)
		{
		    cout << "Ingrese la nueva hora de la cita" << endl;
			cin >> hora[i];

		}
	}
}

//FUNCION PARA IMPRIMIR LAS LISTAS VIGENTES
void Listas()
{
	for (int i = 0; i < nreg; i++)
	{

		cout << " Cita " << i + 1 << endl;
		cout << " El nombre del paciente es: " << name[i] << endl;
		cout << " La hora dela cita es: " << hora[i];
		cout << " EL motivo es: " << trat[i] << endl;
		cout << " El precio es de: " << unitprice[i] << endl;
		cout << " La cantidad de citas es de: " << unitcant[i] << endl;
		cout << " El recio total es de: " << total[i] << endl;

	}
}

//FUNCION PARA ELIMINAR CITA
void Eliminar()
{
	int X;
	cout << "Ingrese el numero de cita que desea eliminar: ";
	cin >> X;
	X = X - 1;

	for (int i = X; i == X; i++)
	{
		name[i] = " ";
		trat[i] = " ";
		hora[i] = " ";
		unitcant[i] = 0;
		unitprice[i] = 0;
		total[i] = 0;
		cout << "CITA BORRADA CON EXITO" << endl;
	}
}

//FUNCION PARA SALIR E IMPRIMIR ARCHIVO
void Salida()
{
	ofstream archivo;
	string narch;
	string texto;
	int texto2;

	narch = "Citas dentales";
	archivo.open(narch.c_str(), ios::out);

	if (archivo.fail())
	{
		cout << "No se pudo guardar el archivo" << endl;
		exit(1);
	}
	
	archivo << "Nombre" << endl;
	archivo << "Precio Unitario" << endl;
	archivo << "Hora de la cita" << endl;
	archivo << "Cantidad de cita" << endl;;
	archivo << "Costo final" << endl;

	for (int i = 0; i < nreg; i++)
	{
		texto = name[i];
		archivo << texto << endl;
		texto = trat[i];
		archivo << texto2 << endl;
		texto = hora[i];
		archivo << texto << endl;
		texto2 = unitcant[i];
		archivo << texto2 << endl;
		texto2 = total[i];
		archivo << texto2 << endl;

	}
	archivo.close();

}
