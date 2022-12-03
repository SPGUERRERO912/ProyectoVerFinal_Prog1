#include "dependencias.h"
#include <conio.h>
/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/

using namespace std;

int main() {
	menu* elMenu = new menu();
	elMenu->menuGeneral();
	delete elMenu;
}