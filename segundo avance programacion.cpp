#include <iostream>
#include <stdlib.h>
using namespace std;

struct citas
{
	int id = 1;
	int price;
	int unitprice;
	int unitcant;
	int total;
	char celnum[15];
	char name[50];
	char trat[50];
	char hora[6];
};
int main()
{
	int i;
	int j;
	int opcion;
	int repeticion = 1;
	int end;
	citas Dcitas[3];

	while (repeticion = 1)
	{
		cout << "\t Bienvenido a Odontologia Smily (⁀ᗢ⁀)" << endl;
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
			for (i = 0; i < 3; i++)
			{
				cout << "\t Si desea agendar una cita por favor introduzca los siguientes datos:" << endl;
				Dcitas[i].id = Dcitas[i].id + i;
				cout << "\t El ID del paciente es: " << Dcitas[i].id << endl;
				cout << "\t Ingrese el nombre del paciente: " << endl;
				cin >> Dcitas[i].name;
				cout << "\t Ingrese un numero celular: " << endl;
				cin >> Dcitas[i].celnum;
				cout << "\t Agendar hora de la cita: " << endl;
				cin >> Dcitas[i].hora;
				cout << "\t Motivo de la cita: " << endl;
				cin >> Dcitas[i].trat;
				cout << "\t Precio del tratamiento" << endl;
				cin >> Dcitas[i].unitprice;
				cout << "\t cantidad del tratamiento" << endl;
				cin >> Dcitas[i].unitcant;
				Dcitas[i].total = Dcitas[i].unitprice * Dcitas[i].unitcant;
				cout << "\t Precio total: " << Dcitas[i].total << endl;
			}
			break;

		case 2:
			cout << "Ingrese el numero de id de la cita que desea modificar: " << endl;
			cin >> j;
			j = j - 1;
			for (i = j; i <= j; i++)
			{
				cout << "\t Si desea agendar una cita por favor introduzca los siguientes datos:" << endl;
				cout << "\t Ingrese el nombre del paciente: " << endl;
				cin >> Dcitas[i].name;
				cout << "\t Ingrese un numero celular: " << endl;
				cin >> Dcitas[i].celnum;
				cout << "\t Agendar hora de la cita: " << endl;
				cin >> Dcitas[i].hora;
				cout << "\t Motivo de la cita: " << endl;
				cin >> Dcitas[i].trat;
				cout << "\t Precio del tratamiento" << endl;
				cin >> Dcitas[i].unitprice;
				cout << "\t cantidad del tratamiento" << endl;
				cin >> Dcitas[i].unitcant;
				Dcitas[i].total = Dcitas[i].unitprice * Dcitas[i].unitcant;
				cout << "\t Precio total: " << Dcitas[i].total << endl;
			}
			break;

		case 3:
			break;
		case 4:
			for (i = 0; i < 3; i++)
			{
				cout << "\t El ID del paciente es: " << Dcitas[i].id << endl;
				cout << "\t El nombre del paciente es: " << Dcitas[i].name << endl;
				cout << "\t El telefono del paciente es: " << Dcitas[i].celnum << endl;
				cout << "\t La hora dela cita es: " << Dcitas[i].hora << endl;
				cout << "\t EL motivo es: " << Dcitas[i].trat << endl;
				cout << "\t El precio es de: " << Dcitas[i].unitprice << endl;
				cout << "\t La cantidad de citas es de: " << Dcitas[i].unitcant << endl;
				cout << "\t El recio total es de: " << Dcitas[i].total << endl;

			}
			break;

		case 5:
			cout << "Desea limpiar la pantalla?, 1 para SI, 2 para NO" << endl;
			cin >> end;
			if (end == 1)
			{
				system("clear");
			}
			else
			{
				return main();
			}
			break;
		case 6:
			cout << "Desea salir de la pagina? 1 para SI o 2 para NO" << endl;
			cin >> end;
			if (end == 1)
			{
				cout << "Gracias por visitarnos" << endl;
				repeticion = 2;
				return 0;
			}
			else {
				return main();
			}
			break;

		}
	}
}
