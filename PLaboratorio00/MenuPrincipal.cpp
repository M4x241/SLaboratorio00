#include "MenuPrincipal.h"
#include <iostream>

using namespace std;

int MenuPrincipal::Sel_opcion()
{
	cout << "BANANA KONG \n\n";
	cout << "1. Iniciar" << endl;
	cout << "2. Tienda" << endl;
	cout << "3. Ajustes" << endl;
	do {
		cin >> nOpcion;
		switch (nOpcion) {
			case 1: opcion = INICIAR; return opcion;
			case 2: opcion = TIENDA; return opcion;
			case 3: opcion = AJUSTES; return opcion;
		}
	} while(nOpcion);
	
}
