#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int opcion;
	int precio;
	int salida;
	int PU;
	int CT;
	char name[100];
	char cel[10];
	char hora[4];
	char trat[100];

	do {
		cout << "BIENVENIDO A ODONTOLOGIA SMILY :D" << endl;
		cout << "A continuacion le presentamos nuestro menu de opciones: " << endl;
		cout << " 1 Agendar una cita" << endl;
		cout << " 2 Modificar una cita" << endl;
		cout << " 3 Eliminar una cita" << endl;
		cout << " 4 Lista de citas vigentes" << endl;
		cout << " 5 Limpiar pantalla" << endl;
		cout << " 6 Salir" << endl;
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			cout << "Si desea agendar una cita por favor introdusca los siguientes datos: " << endl;
			cout << "Ingrese el nombre del paciente: " << endl;
			cin >> name;
			cout << "Ingrese un numero celular: " << endl;
			cin >> cel;
			cout << "Agendar hora de la cita: " << endl;
			cin >> hora;
			cout << "Motivo de la cita: " << endl;
			cin >> trat;
			cout << "Precio del tratamiento" << endl;
			cin >> PU;
			cout << "cantidad del tratamiento" << endl;
			cin >> CT;
			cout << "Precio total: " << PU * CT << endl;
			
			break;
		case 2:
			cout << "Desea modificar una cita?:" << endl;
			break;
		case 3:
			cout << "Desea eliminar una cita?" << endl;
			break;
		case 4:
			cout << "lista de citas vigentes" << endl;
			break;
		case 5:
			cout << "Limpiar pantalla" << endl;
			break;
		case 6:
			cout << "Si desea salir del programa presione 1 o si de lo contrario desea volver al menu presiione 0" << endl;
			cin >> salida;
			if (salida == 0)
			{
				return main();
			}
			else {
				cout << "Gracias vuelva pronto" << endl;

				return 0;
			}
			break;
		default:
			cout << "La opcion que ingreso no es valida" << endl;
			cout << "Si desea salir del programa presione 1 o si de lo contrario desea volver al menu presiione 0" << endl;
			cin >> salida;
			if (salida == 0)
			{
				return main();
			}
			else {
				cout << "Gracias vuelva pronto" << endl;

				return 0;
			}

		}
	}
		while (opcion <= 6);
	

}
