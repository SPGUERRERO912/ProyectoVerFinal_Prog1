/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include "dependencias.h"

class menu {
public:
	void escribirTitulos(string);
	int menuPrincipal();
	void menuCitas();
	int menuMantenimientoGeneral();
	void menuMantenimientoPacientes();
	void menuMantenimientoMedicos();
	int opcionPasajeros();
	void menuMantenimientoAmbulancias();
	void menuMantenimientoTaxis();
	int menuBusquedasGenerales();
	hospital* inicializacion();
	bool opcSalir();
	void menuGeneral();
	~menu();
};