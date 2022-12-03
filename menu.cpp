#include "menu.h"
using namespace std;

void menu::escribirTitulos(string _t) {
	int i, val;
	val = _t.length() + 20;
	for (i = 0; i <= val/2 + 1; i++)
		cout << "- ";
	cout << endl << "- ";
	for (i = 0; i < 10; i++) {
		if (i == 5)
			cout << _t;
		cout << "  ";
	}
	cout << "-" << endl;
	for (i = 0; i <= val/2 + 1; i++)
		cout << "- ";
	cout << endl << endl;
}
int menu::menuPrincipal() { //retorna el valor escogido
	int opcion;
	bool s = 1;
	while (s) {
		system("CLS");
		escribirTitulos("Bienvenido al Menu Principal");
		cout << "-1)  Citas\n-2)  Mantenimiento\n-3)  B"; printf("%c", 163); cout << "squedas\n-4)  Reportes\n-5)  Salir\n";
		cout << "Digite la opcion: "; cin >> opcion;
		switch (opcion) {
		case 1: return 1; break;
		case 2: return 2; break;
		case 3: return 3; break;
		case 4: return 4; break;
		case 5: return 5; break;
		default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch();
		}
	}
}
void menu::menuCitas() {
	system("cls");
	escribirTitulos("Menu Gestion de las Citas");
	cout << "-1)  Crear una cita\n-2)  Buscar una cita\n-3)  Cancelar una cita\n-4)  Mostrar historial de citas por paciente\n-5)  Devolverse\nDigite la opcion: ";
}
// - - - - - - - - - - - - - - - - - - - Menus contenidos en Menu Mantenimiento General - - - - - - - - - - - - - - - - - - -
void menu::menuMantenimientoPacientes() {
	system("cls");
	escribirTitulos("Menu de Mantenimiento de Pacientes");
	cout << "-1)  Ingresar\n-2)  Eliminar\n-3)  Editar\n-4)  Salir";
}
void menu::menuMantenimientoMedicos() {
	system("cls");
	escribirTitulos("Menu de Mantenimiento de Medicos");
	cout << "-1)  Ingresar\n-2)  Eliminar\n-3)  Editar\n-4)  Salir";
}
void menu::menuMantenimientoAmbulancias() {
	system("cls");
	escribirTitulos("Menu de Mantenimiento de Ambulancias");
	cout << "-1)  Ingresar\n-2)  Eliminar\n-3)  Editar\n-4)  Salir";
}
void menu::menuMantenimientoTaxis() {
	system("cls");
	escribirTitulos("Menu de Mantenimiento de Taxis");
	cout << "-1)  Ingresar\n-2)  Eliminar\n-3)  Editar\n-4)  Salir";
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
/*----------------------------------------------------
El retorno de valores de mantGeneral es el siguiente: 
  - Pacientes retorna   1,2,3,4
  - Medicos retorna     11,12,13,14
  - Ambulancias retorna 21,22,23,24
  - Taxis retorna       31,32,33,34
------------------------------------------------------*/
menu::~menu() {
	
}
int menu::menuMantenimientoGeneral() { //retorna el valor escogido
	int opc;
	bool s = 1, p=1;
	while (s) {
		system("cls");
		escribirTitulos("Menu de Mantenimiento");
		cout << "-1)  Mantenimiento pacientes\n-2)  Mantenimiento Medicos\n-3)  Mantenimiento Ambulancias\n-4)  Mantenimiento Taxis\n-5)  Salir\nDigite la opcion: ";
		cin >> opc;
		switch (opc) {
		case 1: 
			while (p) {
				menuMantenimientoPacientes();
				cout << "\nDigite la opcion: "; cin >> opc;
				if (opc > 4 || opc < 0) {
					cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch();
				}
				else
					return opc;
			}
			break;
		case 2: 
			while (p) {
				menuMantenimientoMedicos();
				cout << "\nDigite la opcion: "; cin >> opc;
				if (opc > 4 || opc < 0) {
					cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch();
				}
				else
					return opc+10;
			}
			break;
		case 3: 
			while (p) {
				menuMantenimientoAmbulancias();
				cout << "\nDigite la opcion: "; cin >> opc;
				if (opc > 4 || opc < 0) {
					cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch();
				}
				else
					return opc+20;
			}
			break;
		case 4: 
			while (p) {
				menuMantenimientoTaxis();
				cout << "\nDigite la opcion: "; cin >> opc;
				if (opc > 4 || opc < 0) {
					cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch();
				}
				else
					return opc+30;
			}
			break;
		case 5:
			return opc;
			break;
		default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
		}
	}
}
int menu::menuBusquedasGenerales() {
	int opc;
	while (1) {
		system("cls");
		escribirTitulos("Menu de busquedas");
		cout << "-1)  Lista de pacientes segun su tipo\n-2)  Lista de medicos segun su especialidad\n-3)  Lista de taxis y ambulancias\n";
		cout << "-4)  Buscar pacientes, profesores, medicos, taxis y ambulancias\n     (Estudiantes por cedula o pasaporte)\n";
		cout << "     (Profesores y medicos por cedula)\n     (Ambulancias y taxis por placa)\n-5)  Salir\nDigite la opcion: ";
		cin >> opc;
		switch (opc) {
		case 1: return 1; break;
		case 2: return 2; break;
		case 3: return 3; break;
		case 4: return 4; break;
		case 5: return 5; break;
		default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
		}
	}
}
bool menu::opcSalir() {
	string t;
	bool estado = 1;
	while (estado) {
		printf("%c", 168);
		cout << "Desea salir de la opcion?(Si / No): ";
		cin >> t;
		if (t == "Si" || t == "si" || t == "No" || t == "no")
			estado = 0;
		else {
			cout << "Opcion incorrecta, intentelo de nuevo...\n"; _getch();
			system("cls");
		}
	}
	if (t == "Si" || t == "si")
		return 0;
	else
		return 1;
}
hospital* menu::inicializacion() {
	int opc;
	string _nombre, _telefono, _cedJuridica, _ubicacion;
	escribirTitulos("Datos Basicos del Hospital");
	cout << "Nombre del hospital: "; getline(cin, _nombre);
	cout << "Telefono: "; getline(cin, _telefono);
	cout << "Cedula juridica: "; getline(cin, _cedJuridica);
	cout << "Ubicacion: "; getline(cin, _ubicacion);
	hospital* elHosp = new hospital(_nombre, _telefono, _cedJuridica, _ubicacion);
	cout << "Ingreso exitoso, presione cualquier tecla para continuar...."; _getch();
	system("cls");
	return elHosp;
}
int menu::opcionPasajeros() {
	int auxInt34=0;
	bool condicional = 1;
	while (condicional) {
		cout << "Ingrese la cantidad de pasajeros que viajan(1-4): "; cin >> auxInt34;
		if (auxInt34 < 1 || auxInt34>4) {
			cout << "Cantidad de pasajeros sobrepasa el limite....\n"; (opcSalir() == 0) ? condicional = 0 : 1;
		}
		else {
			condicional = 0;
			return auxInt34;
		}
		system("cls");
	}
	return 0;
	
}
void menu::menuGeneral() {
	listaAmbulancias* lalistaAmb = new listaAmbulancias();
	listaTaxis* lalistaTax = new listaTaxis();
	listaPacientes* lalistaPas = new listaPacientes();
	listaMedicos* lalistaMed = new listaMedicos();
	ListaCitas* lalistaCit = new ListaCitas();
	int contadorAmb = 0, contadorTax = 0, contadorProp = 0;
	hospital* elHosp = inicializacion(); 
	string auxString, auxString2, auxString3, auxString4, auxString5 , auxString6, auxString7;
	paciente* pacienteAux = nullptr;
	estudianteInt* auxEstInt = nullptr;
	estudianteNac* auxEstNac = nullptr;
	profesorInt* auxProInt = nullptr;
	profesorProp* auxProProp = nullptr;
	medico* medicoAux = nullptr;
	cita* lacita1 = nullptr;
	int auxInt, auxInt2, auxInt3=0;
	bool auxBool;
	float auxFloat, auxFloat2;
	double auxDouble;
	taxi* taxiAux = nullptr;
	ambulancia* ambulanciaAux = nullptr;
	int opc1, opc2, opc3;
	bool conCase1, conCase2, conCase3, conCase4, auxOpcSalir;
	bool con1=1, con2=1, con3=1, con4=1, con5=1, con6=1;
	bool p = 1, q = 1, x = 1;
	while (con1) {
		opc1 = menuPrincipal();
		con2 = 1;
		switch (opc1) {
		case 1:
			while (con2) {
				if (lalistaTax->listaVacia() == 1 || lalistaAmb->listaVacia() == 1 || lalistaPas->listaVacia() == 1 || lalistaMed->listaVacia() == 1) {
					stringstream t;
					t << "Lo sentimos, no se pueden crear citas ya que no hay ";
					if (lalistaTax->listaVacia()) {
						t << "taxis";
						if (lalistaAmb->listaVacia())
							t << ", ambulancias";
						else if (lalistaPas->listaVacia())
							t << ", pacientes";
						else if (lalistaMed->listaVacia())
							t << ", medicos";
					}
					else if (lalistaAmb->listaVacia()) {
						t << "ambulancias";
						if (lalistaPas->listaVacia())
							t << ", pacientes";
						else if (lalistaMed->listaVacia())
							t << ", medicos";
					}
					else if (lalistaPas->listaVacia()) {
						t << "pacientes";
						if (lalistaMed->listaVacia())
							t << ", medicos";
					}
					else if(lalistaMed->listaVacia())
						t << ", medicos";
					cout << t.str() << " en el sistema....\nPresione cualquier tecla para continuar"; _getch(); con2 = 0;
				}
				else {
					while (con3) {
						system("cls");
						conCase1 = 1, conCase2 = 1, conCase3 = 1, conCase4 = 1, auxOpcSalir = 0;
						menuCitas(); cin >> opc2;
						system("cls");
						switch (opc2) {
						case 1:
							while (conCase1) {
								system("cls");
								escribirTitulos("Registro de Cita");
								cin.ignore(); cout << "Ingrese la especialidad requerida: "; getline(cin, auxString);
								if (lalistaMed->buscarPorEsp(auxString) == nullptr) {
									cout << "No se encontro ningun medico con la especialidad requerida....\n"; (opcSalir() == 0) ? conCase1 = 0, conCase2=0, conCase3=0, auxOpcSalir=1 : 1;
								}
								else {
									medicoAux = lalistaMed->buscarPorEsp(auxString);
									conCase1 = 0;
								}
							}
							conCase1 = 1;
							while (conCase2) {
								system("cls");
								escribirTitulos("Registro de Cita");
								cout << "Ingrese la cedula del paciente: "; cin >> auxString;
								if (lalistaPas->retornarPaciente(auxString) == nullptr) {
									cout << "No se encontro ningun paciente con el id ingresado....\n"; (opcSalir() == 0) ? conCase1 = 0, conCase2 = 0, conCase3 = 0, auxOpcSalir = 1 : 1;
								}
								else {
									pacienteAux = lalistaPas->retornarPaciente(auxString);
									conCase2 = 0;
								}
							}
							conCase2 = 1;
							system("cls");
							while (conCase3) {
								con5 = 1;
								bool auxEstado = 1;
								system("cls");
								escribirTitulos("Registro de Cita");
								cout << "-1)  Devolverse por sus propios medios\n-2)  Taxi\n-3)  Ambulancia\nDigite la opcion: "; cin >> auxInt;
								(auxInt > 0 && auxInt < 4) ? (auxInt == 1) ? contadorProp++ : (auxInt == 2) ? contadorTax++ : (auxInt == 3) ? contadorAmb++ : 1 : 1;
								switch (auxInt) {
								case 1: conCase3 = 0; break;
								case 2:
									while (con5) {
										cout << "-1)  Ida\n-2)  Vuelta\n-3)  Ida y Vuelta\nDigite la opcion: "; cin >> auxInt2;
										switch (auxInt2) {
										case 1: 
											cout << "Ingrese la cantidad de kilometros a recorrer: "; cin >> auxFloat;
											while (auxEstado) {
												auxInt3 = opcionPasajeros();
												(auxInt3  == 0) ? auxOpcSalir = 1 : 0;
												auxEstado = 0, con5 = 0, conCase3 = 0;
												system("cls");
											}
											taxiAux = dynamic_cast<taxi*>(lalistaTax->randObjeto()); 
											taxiAux->setKm(auxFloat); taxiAux->setNumPacientes(auxInt3); taxiAux->setTipoViaje("Ida");
											con5 = 0; 
											break;
										case 2: 
											cout << "Ingrese la cantidad de kilometros a recorrer: "; cin >> auxFloat;
											while (auxEstado) {
												auxInt3 = opcionPasajeros();
												(auxInt3 == 0) ? auxOpcSalir = 1 : 0;
												auxEstado = 0, con5 = 0, conCase3 = 0;
												system("cls");
											}
											taxiAux = dynamic_cast<taxi*>(lalistaTax->randObjeto());
											taxiAux->setKm(auxFloat); taxiAux->setNumPacientes(auxInt3); taxiAux->setTipoViaje("Vuelta");
											con5 = 0;  
											break;
										case 3: 
											cout << "Ingrese la cantidad de kilometros a recorrer: "; cin >> auxFloat;
											while (auxEstado) {
												auxInt3 = opcionPasajeros();
												(auxInt3 == 0) ? auxOpcSalir = 1 : 0;
												auxEstado = 0, con5 = 0, conCase3 = 0;
												system("cls");
											}
											taxiAux = dynamic_cast<taxi*>(lalistaTax->randObjeto());
											taxiAux->setKm(auxFloat); taxiAux->setNumPacientes(auxInt3); taxiAux->setTipoViaje("Ida y Vuelta");
											con5 = 0;
											break;
										default: cout << "Opcion incorrecta....\n"; (opcSalir() == 0) ? con5 = 0, auxOpcSalir = 1 : 1; system("cls"); break;
										}
									}
									break;
									con5 = 1;
								case 3:
									con5 = 1;
									while (con5) {
										cout << "-1)  Ida\n-2)  Vuelta\n-3)  Ida y Vuelta\nDigite la opcion: "; cin >> auxInt2;
										switch (auxInt2) {
										case 1: ambulanciaAux = dynamic_cast<ambulancia*>(lalistaAmb->randObjeto()); con5 = 0; conCase3 = 0; ambulanciaAux->setTipoViaje("Ida"); ambulanciaAux->setOcupada(1); break;
										case 2: ambulanciaAux = dynamic_cast<ambulancia*>(lalistaAmb->randObjeto()); con5 = 0; conCase3 = 0; ambulanciaAux->setTipoViaje("Vuelta"); ambulanciaAux->setOcupada(1); break;
										case 3: ambulanciaAux = dynamic_cast<ambulancia*>(lalistaAmb->randObjeto()); con5 = 0; conCase3 = 0; ambulanciaAux->setTipoViaje("Ida y vuelta"); ambulanciaAux->setOcupada(1); break;
										default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
										}
									}
									con5 = 1; break;
								default: cout << "Opcion incorrecta....\n"; (opcSalir() == 0) ? conCase3 = 0, auxOpcSalir = 1 : 1; break;
								}
								con4 = 0;
							}
							conCase3 = 1; system("cls");
							if (auxOpcSalir!=1) {
								escribirTitulos("Registro de Cita");
								cout << "Ingrese la fecha de la cita formato(DD/MM/AAAA): "; cin >> auxString;
								cout << "Ingrese la hora de la cita(HH:MM): "; cin >> auxString2;
								system("cls");
								if (ambulanciaAux != nullptr)
									lacita1 = new cita(pacienteAux, medicoAux, auxString2, auxString, ambulanciaAux);
								else if (taxiAux != nullptr)
									lacita1 = new cita(pacienteAux, medicoAux, auxString2, auxString, taxiAux);
								else
									lacita1 = new cita(pacienteAux, medicoAux, auxString2, auxString, nullptr);
								lalistaCit->insertarFinal(lacita1);
							}
							break;
						case 2:
							while (con4) {
								system("cls");
								escribirTitulos("Visualizacion de Citas");
								cout << "Codigos disponibles: " << endl << lalistaCit->getCodigos() << endl;
								cout << "Escriba el codigo de la cita que desea ver: "; cin >> auxInt;
								if (lalistaCit->buscarCita(auxInt) == "No se encontro una cita con el codigo ingresado....\n") {
									cout << lalistaCit->buscarCita(auxInt);
									(opcSalir() == 0) ? con4 = 0 : 1;
								}
								else {
									system("cls");
									escribirTitulos("Visualizacion de Citas");
									cout << lalistaCit->buscarCita(auxInt) << "Presione cualquier tecla para continuar\n"; _getch(); con4 = 0;
								}
							}
							con4 = 1;
							break;
						case 3:
							while (con4) {
								system("cls");
								escribirTitulos("Eliminacion de Citas");
								cout << "Codigos disponibles: " << endl << lalistaCit->getCodigos() << endl;
								cout << "Escriba el codigo de la cita que desea cancelar: "; cin >> auxInt;
								if (lalistaCit->cancelarCita(auxInt)) {
									cout << "Eliminacion con exito\n";
									con4 = 0;
								}	
								else {
									cout << "No se encontro una cita con el codigo ingresado....\n";
									(opcSalir() == 0) ? con4 = 0 : 1;
								}
							}
							con4 = 1;
							break; 
						case 4:
							while (con4) {
								system("CLS");
								escribirTitulos("Visualizacion de historial de citas");
								cout << "Escriba el ID del paciente del cual desea conocer su historial de citas: "; cin >> auxString;
								system("CLS");
								cout << "Listado de citas por paciente con id: " << auxString << endl;
								cout << lalistaCit->citasPorPaciente(auxString) << endl; 
								if (lalistaCit->citasPorPaciente(auxString) == "") {
									cout << "No hay ningun paciente relacionado con el ID ingresado....\n";
									(opcSalir() == 0) ? con4 = 0 : 1;
								}
								else {
									con4 = 0;
									cout << "Presione cualquier tecla para continuar...."; _getch();
								}
								system("CLS");
							}
							con4 = 1; break;
						case 5:
							con3 = 0; con2 = 0;
							system("cls");
							break;
						default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
						}
					}
					
				}
			}
			con3 = 1; con2 = 1; break;
		case 2:
			con1 = 1, con2 = 1, con3 = 1, con4 = 1, con5 = 1, con6 = 1;
			while (con2) {
				opc3 = menuMantenimientoGeneral();
				switch (opc3) {
				case 1:
					while (p) {
						system("cls");
						escribirTitulos("Insertar Pacientes");
						cout << "-1)  Estudiantes nacionales\n-2)  Estudiantes internacionales\n-3)  Profesores interinos\n-4)  Profesor con propiedad\n-5)  Salir\nDigite una opcion: "; cin >> opc1;
						switch (opc1) {
						case 1:
							system("cls");
							escribirTitulos("Insertar Estudiantes Nacionales");
							cin.ignore(); cout << "Ingrese SOLO el nombre: "; getline(cin, auxString);
							cout << "Ingrese SOLO los apellidos "; getline(cin, auxString2);
							cout << "Ingrese la universidad de procedencia: "; getline(cin, auxString3);
							cout << "Ingrese el codigo de carrera: "; cin >> auxString4;
							cout << "Ingrese el ultimo nivel cursado: "; cin >> auxInt;
							cout << "Ingrese el numero de telefono: "; cin >> auxInt2;
							cout << "Se encuentra en activo actualemente?(Si=1/No=0): "; cin >> auxBool;
							cout << "Ingrese su cedula: "; cin >> auxString5;
							auxEstNac = new estudianteNac(auxString, auxString2, auxString3, auxString4, auxInt, auxInt2, auxString5, auxBool);
							lalistaPas->insertarFinal(auxEstNac);
							cout << "Ingreso del estudiante con exito....\nPresione cualquier tecla para continuar\n"; _getch();
;							break;
						case 2:
							system("cls");
							escribirTitulos("Insertar Estudiantes Internacionales");
							cin.ignore(); cout << "Ingrese SOLO el nombre: "; getline(cin, auxString);
							cout << "Ingrese SOLO los apellidos "; getline(cin, auxString2);
							cout << "Ingrese la universidad de procedencia: "; getline(cin, auxString3);
							cout << "Ingrese el codigo de carrera: "; cin >> auxString4;
							cout << "Ingrese el ultimo nivel cursado: "; cin >> auxInt;
							cout << "Ingrese el numero de telefono: "; cin >> auxInt2;
							cout << "Ingrese su nacionalidad: "; cin >> auxString5;
							cout << "Ingrese su numero de pasaporte: "; cin >> auxString6;
							cout << "Ingrese su condicion en el pais: "; cin >> auxString7;
							auxEstInt = new estudianteInt(auxString, auxString2, auxString3, auxString4, auxInt, auxInt2, auxString5, auxString6, auxString7);
							lalistaPas->insertarFinal(auxEstInt);
							cout << "Ingreso del estudiante con exito....\nPresione cualquier tecla para continuar\n"; _getch();
							break;
						case 3:
							system("cls");
							escribirTitulos("Insertar Profesores Interinos");
							cin.ignore(); cout << "Ingrese SOLO el nombre: "; getline(cin, auxString);
							cout << "Ingrese SOLO los apellidos "; getline(cin, auxString2);
							cout << "Ingrese la universidad de procedencia: "; getline(cin, auxString3);
							cout << "Ingrese la cedula: "; cin >> auxString4;
							cin.ignore(); cout << "Ingrese el titulo: "; getline(cin, auxString5);
							cout << "Ingrese los años laborados: "; cin >> auxInt;
							cout << "Ingrese la calificacion obtenida: "; cin >> auxDouble;
							auxProInt = new profesorInt(auxString, auxString2, auxString3, auxString4, auxString5, auxInt, auxDouble);
							lalistaPas->insertarFinal(auxProInt);
							cout << "Ingreso del profesor con exito....\nPresione cualquier tecla para continuar\n"; _getch();
							break;
						case 4:
							system("cls");
							escribirTitulos("Insertar Profesores con Propiedad");
							cin.ignore(); cout << "Ingrese SOLO el nombre: "; getline(cin, auxString);
							cout << "Ingrese SOLO los apellidos "; getline(cin, auxString2);
							cout << "Ingrese la universidad de procedencia: "; getline(cin, auxString3);
							cout << "Ingrese la cedula: "; cin >> auxString4;
							cin.ignore(); cout << "Ingrese el titulo: "; getline(cin, auxString5);
							cout << "Ingrese los años laborados: "; cin >> auxInt;
							cout << "Ingrese el codigo de plaza: "; cin >> auxString6;
							auxProProp = new profesorProp(auxString, auxString2, auxString3, auxString4, auxString5, auxInt, auxString6);
							lalistaPas->insertarFinal(auxProProp);
							cout << "Ingreso del profesor con exito....\nPresione cualquier tecla para continuar\n"; _getch();
							break;
						case 5: p = 0; break;
						default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
						}
					}
					p = 1; break;
				case 2:
					p = 1;
					while (p) {
						system("cls");
						cout << "Cedulas de personas ingresados: \n" << lalistaPas->getIdent() << endl;
						cout << "Ingrese el ID del paciente que desea eliminar: "; cin >> auxString2;
						if (lalistaPas->eliminarPac(auxString2)) {
							cout << "Eliminacion del medico con exito\nPresione cualquier tecla para continuar...."; p = 0; _getch();
						}
						else {
							cout << "No se encontro ningun medico asociado con esa cedula....\n"; (opcSalir() == 0) ? p = 0 : 0;
						}
					}
					p = 1; break;
					break;
				case 3:
					p = 1, con6 = 1, q = 1;
					while (p) {
						system("cls");
						escribirTitulos("Edicion de Pacientes");
						cout << "-1)  Estudiantes nacionales\n-2)  Estudiantes internacionales\n-3)  Profesores interinos\n-4)  Profesor con propiedad\n-5)  Salir\nDigite una opcion: "; cin >> opc1;
						switch (opc1)
						{
						case 1:
							while (q) {
								system("cls");
								escribirTitulos("Edicion Estudiantes Nacionales");
								cout << "Ingrese la cedula del estudiante nacional: "; cin >> auxString;
								if (lalistaPas->encontrarPaciente(auxString)) {
									while (con6) {
										system("cls");
										escribirTitulos("Edicion Estudiantes Nacionales");
										cout << "-1)  Nombre\n-2)  Apellidos\n-3)  Nombre de la universidad\n-4)  Codigo de carrera\n-5)  Ultimo nivel cursado\n-6)  Numero de Telefono\n-7)  Estado\n-8)  Salir\nDigite una opcion: "; cin >> opc2;
										switch (opc2) {
										case 1:
											cin.ignore(); cout << "Ingrese el nombre: "; getline(cin, auxString2);
											lalistaPas->retornarPaciente(auxString)->setNombre(auxString2);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 2:
											cin.ignore(); cout << "Ingrese los apellidos: "; getline(cin, auxString2);
											lalistaPas->retornarPaciente(auxString)->setApellidos(auxString2);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 3:
											cin.ignore(); cout << "Ingrese la universidad: "; getline(cin, auxString3);
											lalistaPas->retornarPaciente(auxString)->setUniversidad(auxString3);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 4:
											cout << "Ingrese el codigo de carrera: "; cin >> auxString2;
											dynamic_cast<estudianteNac*>(lalistaPas->retornarPaciente(auxString))->setCod(auxString2);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 5:
											cout << "Ingrese el ultimo nivel cursado: "; cin >> auxInt;
											dynamic_cast<estudianteNac*>(lalistaPas->retornarPaciente(auxString))->setUltimo(auxInt);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 6:
											cout << "Ingrese el numero de telefono: "; cin >> auxInt2;
											dynamic_cast<estudianteNac*>(lalistaPas->retornarPaciente(auxString))->setTelefono(auxInt2);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 7:
											cout << "Se encuentra en activo actualemente?(Si=1/No=0): "; cin >> auxBool;
											dynamic_cast<estudianteNac*>(lalistaPas->retornarPaciente(auxString))->setEstadoActividad(auxBool);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 8: con6 = 0; q = 0; break;
										default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
										}
									}
								}
								else {
									cout << "No se encontro ningun paciente asociado a esa cedula....\n"; (opcSalir() == 0) ? q = 0 : 1;
								}
							}
							con6 = 1, q = 1; break;
						case 2:
							while (q) {
								system("cls");
								escribirTitulos("Edicion Estudiantes Internacionales");
								cout << "Ingrese el numero de pasaporte: "; cin >> auxString;
								if (lalistaPas->encontrarPaciente(auxString)) {
									while (con6) {
										system("cls");
										escribirTitulos("Edicion Estudiantes Internacionales");
										cout << "-1)  Nombre\n-2)  Apellidos\n-3)  Nombre de la universidad\n-4)  Codigo de carrera\n-5)  Ultimo nivel cursado\n-6)  Numero de Telefono\n-7)  Nacionalidad\n-8)  Condicion en el pais\n-9)  Salir\nDigite una opcion: "; cin >> opc2;
										switch (opc2) {
										case 1:
											cin.ignore(); cout << "Ingrese el nombre: "; getline(cin, auxString2);
											lalistaPas->retornarPaciente(auxString)->setNombre(auxString2);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 2:
											cin.ignore(); cout << "Ingrese los apellidos: "; getline(cin, auxString2);
											lalistaPas->retornarPaciente(auxString)->setApellidos(auxString2);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 3:
											cin.ignore(); cout << "Ingrese la universidad: "; getline(cin, auxString3);
											lalistaPas->retornarPaciente(auxString)->setUniversidad(auxString3);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 4:
											cout << "Ingrese el codigo de carrera: "; cin >> auxString2;
											dynamic_cast<estudianteInt*>(lalistaPas->retornarPaciente(auxString))->setCod(auxString2);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 5:
											cout << "Ingrese el ultimo nivel cursado: "; cin >> auxInt;
											dynamic_cast<estudianteInt*>(lalistaPas->retornarPaciente(auxString))->setUltimo(auxInt);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 6:
											cout << "Ingrese el numero de telefono: "; cin >> auxInt2;
											dynamic_cast<estudianteInt*>(lalistaPas->retornarPaciente(auxString))->setTelefono(auxInt2);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 7:
											cout << "Ingrese la nacionalidad: "; cin >> auxString2;
											dynamic_cast<estudianteInt*>(lalistaPas->retornarPaciente(auxString))->setNacionalidad(auxString2);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 8:
											cin.ignore(); cout << "Ingrese la condicion en el pais: "; getline(cin, auxString2);
											dynamic_cast<estudianteInt*>(lalistaPas->retornarPaciente(auxString))->setCondicion(auxString2);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 9: con6 = 0; q = 0; break;
										default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
										}
									}
								}
								else {
									cout << "No se encontro ningun paciente asociado a ese numero de pasaporte....\n"; (opcSalir() == 0) ? q = 0 : 1;
								}
							}
							p = 1, con6 = 1, q = 1; break;
						case 3:
							while (q) {
								system("cls");
								escribirTitulos("Edicion Profesores Interinos");
								cout << "Ingrese la cedula del profesor: "; cin >> auxString;
								if (lalistaPas->encontrarPaciente(auxString)) {
									while (con6) {
										system("cls");
										escribirTitulos("Edicion Profesores Interinos");
										cout << "-1)  Nombre\n-2)  Apellidos\n-3)  Nombre de la universidad\n-4)  Titulo\n-5)  Años laborados\n-6)  Calificacion\n-7)  Salir\nDigite una opcion: "; cin >> opc2;
										switch (opc2) {
										case 1:
											cin.ignore(); cout << "Ingrese el nombre: "; getline(cin, auxString2);
											lalistaPas->retornarPaciente(auxString)->setNombre(auxString2);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 2:
											cin.ignore(); cout << "Ingrese los apellidos: "; getline(cin, auxString2);
											lalistaPas->retornarPaciente(auxString)->setApellidos(auxString2);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 3:
											cin.ignore(); cout << "Ingrese la universidad: "; getline(cin, auxString3);
											lalistaPas->retornarPaciente(auxString)->setUniversidad(auxString3);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 4:
											cin.ignore(); cout << "Ingrese el titulo: "; getline(cin, auxString2);
											dynamic_cast<profesorInt*>(lalistaPas->retornarPaciente(auxString))->setTitulo(auxString2);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 5:
											cout << "Ingrese los años laborados: "; cin >> auxInt;
											dynamic_cast<profesorInt*>(lalistaPas->retornarPaciente(auxString))->setAnniosLab(auxInt);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 6:
											cout << "Ingrese la calificacion: "; cin >> auxDouble;
											dynamic_cast<profesorInt*>(lalistaPas->retornarPaciente(auxString))->setCalificacion(auxDouble);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 7: con6 = 0; q = 0; break;
										default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
										}
									}
								}
								else {
									cout << "No se encontro ningun paciente asociado a ese numero de pasaporte....\n"; (opcSalir() == 0) ? q = 0 : 1;
								}
							}
							p = 1, con6 = 1, q = 1; break;
						case 4:
							while (q) {
								system("cls");
								escribirTitulos("Edicion Profesores con Propiedad");
								cout << "Ingrese la cedula del profesor: "; cin >> auxString;
								if (lalistaPas->encontrarPaciente(auxString)) {
									while (con6) {
										system("cls");
										escribirTitulos("Edicion Profesores con Propiedad");
										cout << "-1)  Nombre\n-2)  Apellidos\n-3)  Nombre de la universidad\n-4)  Titulo\n-5)  Años laborados\n-6)  Codigo de plaza\n-7)  Salir\nDigite una opcion: "; cin >> opc2;
										switch (opc2) {
										case 1:
											cin.ignore(); cout << "Ingrese el nombre: "; getline(cin, auxString2);
											lalistaPas->retornarPaciente(auxString)->setNombre(auxString2);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 2:
											cin.ignore(); cout << "Ingrese los apellidos: "; getline(cin, auxString2);
											lalistaPas->retornarPaciente(auxString)->setApellidos(auxString2);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 3:
											cin.ignore(); cout << "Ingrese la universidad: "; getline(cin, auxString3);
											lalistaPas->retornarPaciente(auxString)->setUniversidad(auxString3);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 4:
											cin.ignore(); cout << "Ingrese el titulo: "; getline(cin, auxString2);
											dynamic_cast<profesorProp*>(lalistaPas->retornarPaciente(auxString))->setTitulo(auxString2);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 5:
											cout << "Ingrese los años laborados: "; cin >> auxInt;
											dynamic_cast<profesorProp*>(lalistaPas->retornarPaciente(auxString))->setAnniosLab(auxInt);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 6:
											cout << "Ingrese el codigo de plaza: "; cin >> auxString2;
											dynamic_cast<profesorProp*>(lalistaPas->retornarPaciente(auxString))->setCodigoPlaza(auxString2);
											cout << "Edicion realizada con exito....\nPresione cualquier tecla para continuar "; _getch(); break;
										case 7: con6 = 0; q = 0; break;
										default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
										}
									}
								}
								else {
									cout << "No se encontro ningun paciente asociado a ese numero de pasaporte....\n"; (opcSalir() == 0) ? q = 0 : 1;
								}
							}
							p = 1, con6 = 1, q = 1; break;
							break;
						case 5: p = 0; break;
						default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
						}
					}
					p = 1; con6 = 1; q = 1; break;
				case 5:
					con2 = 0;
					break;
				case 11:
					system("cls");
					escribirTitulos("Menu de ingreso de medicos");
					cin.ignore(); cout << "Ingrese SOLO el nombre del medico: "; getline(cin, auxString);
					cout << "Ingrese los apellidos del medico: "; getline(cin, auxString2);
					cout << "Ingrese la cedula del medico: "; cin >> auxString3;
					cout << "Ingrese el numero de telefono del medico: "; cin >> auxInt;
					cout << "Ingrese la especialidad del medico: "; cin >> auxString4;
					medicoAux = new medico(auxString, auxString2, auxString3, auxInt, auxString4);
					lalistaMed->insertarFinal(medicoAux);
					cout << "Ingreso del medico con exito....\nPresione cualquier tecla para continuar\n"; _getch();
					break;
				case 12:
					p = 1;
					while (p) {
						system("cls");
						escribirTitulos("Menu de eliminacion de medicos");
						cout << "Cedulas de medicos ingresados: \n" << lalistaMed->getCedulas() << endl;
						cout << "Ingrese la cedula del medico que desea eliminar: "; cin >> auxString2;
						if (lalistaMed->eliminaMed(auxString2)) {
							cout << "Eliminacion del medico con exito\nPresione cualquier tecla para continuar...."; p = 0; _getch();
						}
						else {
							cout << "No se encontro ningun medico asociado con esa cedula....\n"; (opcSalir() == 0) ? p = 0 : 0;
						}
					}
					p = 1; break;
					break;
				case 13:
					p = 1, q = 1;
					while (p) {
						system("cls");
						escribirTitulos("Menu de edicion de medicos");
						cout << "Cedulas de medicos ingresados: \n" << lalistaMed->getCedulas() << endl;
						cout << "Ingrese la cedula del medico que desea modificar: "; cin >> auxString;
						if (lalistaMed->encontrarMedico(auxString) != nullptr) {
							while (q) {
								cout << "-1)  Editar nombre\n-2)  Editar apellidos\n-3)  Editar numero telefonico\n-4)  Editar especialidad\n-5)  Salir\nEscriba una opcion: "; cin >> auxInt;
								switch (auxInt) {
								case 1:
									cin.ignore(); cout << "Ingrese el nombre del medico con cedula (" << auxString << "): "; getline(cin, auxString2);
									lalistaMed->encontrarMedico(auxString)->setNombre(auxString2);
									cout << "Edicion realizada correctamente....\n" << "Presione cualquier tecla para continuar"; _getch(); q = 0; p = 0;
									break;
								case 2:
									cout << "Ingrese los apellidos del medico con cedula (" << auxString << "): "; getline(cin, auxString2);
									lalistaMed->encontrarMedico(auxString)->setApellidos(auxString2);
									cout << "Edicion realizada correctamente....\n" << "Presione cualquier tecla para continuar"; _getch(); q = 0; p = 0;
									break;
								case 3:
									cout << "Ingrese el numero telefonico del medico con cedula (" << auxString << "): "; cin >> auxInt2;
									lalistaMed->encontrarMedico(auxString)->setNumTelefono(auxInt2);
									cout << "Edicion realizada correctamente....\n" << "Presione cualquier tecla para continuar"; _getch(); q = 0; p = 0;
									break;
								case 4:
									cout << "Ingrese la especialidad del medico con cedula (" << auxString << "): "; getline(cin, auxString2);
									lalistaMed->encontrarMedico(auxString)->setEspecialidad(auxString2);
									cout << "Edicion realizada correctamente....\n" << "Presione cualquier tecla para continuar"; _getch(); q = 0; p = 0;
									break;
								case 5:
									p = 0, q = 0;
								default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
								}
							}
						}
						else 
							cout << "No se encontro ningun taxi con la placa ingresada....\n"; (opcSalir() == 0) ? p = 0 : 1;
					}
					p = 1; break;
				case 21:
					system("cls");
					escribirTitulos("Menu de ingreso de ambulancias");
					cout << "Ingrese la placa de la ambulancia: "; cin >> auxString;
					cin.ignore(); cout << "Ingrese el modelo de la ambulancia: "; getline(cin, auxString2);
					cout << "Ingrese los km de la ambulancia: "; cin >> auxFloat;
					cin.ignore(); cout << "Ingrese el tipo de viaje que realiza(Ida/Ida y Vuelta/Vuelta): "; getline(cin, auxString3);
					ambulanciaAux = new ambulancia(auxString, auxString2, auxFloat, auxString3);
					lalistaAmb->insertarFinal(ambulanciaAux);
					cout << "Ingreso de la ambulancia con exito....\nPresione cualquier tecla para continuar\n"; _getch();
					break;
				case 22:
					p = 1;
					while (p) {
						system("cls");
						escribirTitulos("Menu de eliminacion de ambulancias");
						cout << "Placas de ambulancias ingresadas: \n" << lalistaAmb->getPlacas() << endl;
						cout << "Ingrese la placa de la ambulancia que desea eliminar: "; cin >> auxString2;
						if (lalistaAmb->eliminarAmbu(auxString2)) {
							cout << "Eliminacion de la ambulancia con exito\nPresione cualquier tecla para continuar...."; p = 0; _getch();
						}
						else {
							cout << "No se encontro ninguna ambulancia\n"; (opcSalir() == 0) ? p = 0 : 0;
						}
					}
					con1 = 1; break;
				case 23:
					p = 1, q = 1;
					while (p) {
						system("cls");
						escribirTitulos("Menu de edicion de ambulancias");
						cout << "Placas de ambulancias ingresadas: \n" << lalistaAmb->getPlacas() << endl;
						cout << "Ingrese el numero de placa de la ambulancia que desea editar: "; cin >> auxString;
						if (lalistaAmb->encontraAmb(auxString) != nullptr) {
							while (q) {
								system("cls");
								escribirTitulos("Menu de edicion de ambulancias");
								cout << "-1)  Editar marca\n-2)  Editar KM\n-3)  Editar tipo de Viaje\n-4)  Salir\nEscriba una opcion: "; cin >> auxInt;
								switch (auxInt) {
								case 1:
									cin.ignore(); cout << "Ingrese la marca de la ambulancia con placa (" << auxString << "): "; getline(cin, auxString2);
									lalistaAmb->encontraAmb(auxString)->setMarca(auxString2);
									cout << "Edicion realizada correctamente....\n" << "Presione cualquier tecla para continuar"; _getch(); q = 0; p = 0;
									break;
								case 2:
									cout << "Ingrese los KM de la ambulancia con placa (" << auxString << "): "; cin >> auxFloat;
									lalistaAmb->encontraAmb(auxString)->setKm(auxFloat);
									cout << "Edicion realizada correctamente....\n" << "Presione cualquier tecla para continuar"; _getch(); q = 0; p = 0;
									break;
								case 3: 
									cin.ignore(); cout << "Ingrese el tipo de viaje que realiza la ambulancia con placa (" << auxString << ") (Ida/Ida y Vuelta/Vuelta): "; getline(cin, auxString3);
									lalistaAmb->encontraAmb(auxString)->setTipoViaje(auxString3);
									cout << "Edicion realizada correctamente....\n" << "Presione cualquier tecla para continuar"; _getch(); q = 0; p = 0;
									break;
								case 4:
									q = 0; p = 0; break;
								default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
								}
							}
						}
						else {
							cout << "No se encontro ningun taxi con la placa ingresada....\n"; (opcSalir() == 0) ? p = 0 : 1;
						}
					}
					break;
				case 31:
					system("cls");
					escribirTitulos("Menu de ingreso de taxis");
					cout << "Ingrese la placa del taxi: "; cin >> auxString;
					cin.ignore(); cout << "Ingrese el modelo del taxi: "; getline(cin, auxString2);
					cout << "Ingrese los KM del taxi: "; cin >> auxFloat;
					cin.ignore(); cout << "Ingrese el tipo de viaje del taxi(Ida/Ida y Vuelta/Vuelta): "; getline(cin, auxString3);
					cout << "Ingrese el precio del viaje: "; cin >> auxDouble;
					cout << "Ingrese el numero de pacientes que viaja: "; cin >> auxInt;
					taxiAux = new taxi(auxString, auxString2, auxFloat, auxString3, auxDouble, auxInt);
					lalistaTax->insertarFinal(taxiAux);
					cout << "Ingreso del taxi con exito....\nPresione cualquier tecla para continuar\n"; _getch();
					break;
				case 32:
					p = 1;
					while (p) {
						system("cls");
						cout << "Placas de taxis ingresados: \n" << lalistaTax->getPlacas() << endl;
						cout << "Ingrese la placa del taxi que desea eliminar: "; cin >> auxString2;
						if (lalistaTax->eliminarTaxi(auxString2)) {
							cout << "Eliminacion del taxi con exito\nPresione cualquier tecla para continuar...."; p = 0; _getch();
						}
						else {
							cout << "No se encontro ningun taxi\n"; (opcSalir() == 0) ? con1 = 0 : 0;
						}
					}
					con1 = 1; break;
				case 33:
					p = 1, q=1;
					while (p) {
						system("cls");
						cout << "Placas de taxis ingresados: \n" << lalistaTax->getPlacas() << endl;
						cout << "Ingrese el numero de placa del taxi que desea editar: "; cin >> auxString;
						if (lalistaTax->encontraTax(auxString) != nullptr) {
							while (q) {
								system("cls");
								escribirTitulos("Menu de edicion de taxis");
								cout << "-1)  Editar marca\n-2)  Editar KM\n-3)  Editar tipo de Viaje\n-4)  Editar Costo de Viaje\n-5)  Editar numero de Pacientes\n-6)  Salir\nEscriba una opcion: "; cin >> auxInt;
								switch (auxInt) {
								case 1: 
									cin.ignore(); cout << "Ingrese la marca del taxi con placa (" << auxString << "): "; getline(cin, auxString2);
									lalistaTax->encontraTax(auxString)->setMarca(auxString2); 
									cout << "Edicion realizada correctamente....\n" << "Presione cualquier tecla para continuar"; _getch(); q = 0; p = 0;
									break;
								case 2:
									cout << "Ingrese los KM: "; cin >> auxFloat;
									lalistaTax->encontraTax(auxString)->setKm(auxFloat);
									cout << "Edicion realizada correctamente....\n" << "Presione cualquier tecla para continuar"; _getch(); q = 0; p = 0;
									break;
								case 3:
									cin.ignore(); cout << "Ingrese el tipo de viaje del taxi(Ida/Ida y Vuelta/Vuelta): "; getline(cin, auxString2);
									lalistaTax->encontraTax(auxString)->setTipoViaje(auxString2);
									cout << "Edicion realizada correctamente....\n" << "Presione cualquier tecla para continuar"; _getch(); q = 0; p = 0;
									break;
								case 4:
									cout << "Ingrese el costo del viaje: "; cin >> auxDouble;
									lalistaTax->encontraTax(auxString)->setCostoViaje(auxDouble);
									cout << "Edicion realizada correctamente....\n" << "Presione cualquier tecla para continuar"; _getch(); q = 0; p = 0;
									break;
								case 5:
									while (x) {
										system("cls");
										escribirTitulos("Menu de edicion de taxis");
										cout << "Ingrese el numero de pasajeros(1-4): "; cin >> auxInt2;
										if (auxInt2 < 5 && auxInt2>0) {
											lalistaTax->encontraTax(auxString)->setNumPacientes(auxInt2);
											cout << "Edicion realizada correctamente....\n" << "Presione cualquier tecla para continuar"; _getch(); x = 0; q = 0; p = 0;
										}
										else {
											cout << "Numero no coincide con alguno de los disponibles....\n"; (opcSalir() == 0) ? x = 0, q = 0, p = 0 : 1; break;
										}	
									}
									x = 1;
									break;
								case 6:
									q = 0; p = 0; break;
								default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
								}
							}
						}
						else {
							cout << "No se encontro ningun taxi con la placa ingresada....\n"; (opcSalir() == 0) ? p = 0 : 1;
						}
					}
					break;
				case 4: case 14: case 24: case 34: system("cls"); break;
				default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
				}
			}
			break;
		case 3:
			q = 1, p = 1;
			while (p) {
				system("cls");
				opc2 = menuBusquedasGenerales();
				switch (opc2) {
				case 1:
					system("cls");
					escribirTitulos("Mostrar Pacientes");
					cout << lalistaPas->toString() << "Presione cualquier tecla para continuar"; _getch(); break;
					break;
				case 2:
					system("cls");
					escribirTitulos("Mostrar Medicos");
					cout << lalistaMed->toString() << "Presione cualquier tecla para continuar"; _getch(); break;
				case 3:
					system("cls");
					escribirTitulos("Mostrar Transporte");
					cout << "- Lista de taxis con los que el hospital tiene convenio\n";
					cout << lalistaTax->toString();
					cout << "- Lista de ambulancias que tiene a cargo el hospital\n";
					cout << lalistaAmb->toString() << "Presione cualquier tecla para continuar"; _getch(); break;
				case 4:
					while (q) {
						system("cls");
						escribirTitulos("Buscar personas y vehiculos");
						cout << "-1)  Estudiantes, profesores y medicos\n-2)  Ambulancias y taxis\n-3)  Salir\nDigite una opcion: "; cin >> opc3;
						switch (opc3) {
						case 1:
							cout << "Ingrese el numero de identidad de la persona que busca: "; cin >> auxString;
							if (lalistaPas->encontrarPaciente(auxString)) {
								system("cls");
								escribirTitulos("Buscar personas y vehiculos");
								cout << lalistaPas->retornarPaciente(auxString)->toString() << "Presione cualquier tecla para continuar"; _getch();
							}
							else if (lalistaMed->encontrarMedico(auxString) != nullptr) {
								system("cls");
								escribirTitulos("Buscar personas y vehiculos");
								cout << lalistaMed->encontrarMedico(auxString)->toString() << "Presione cualquier tecla para continuar"; _getch();
							}
							else {
								cout << "El numero de indentidad introducido no coincide con ninguna persona del sistema....\n"; (opcSalir() == 0) ? q = 0 : 1;
							}
							break;
						case 2:
							cout << "Ingrese la placa del vehiculo que busca: "; cin >> auxString;
							if (lalistaTax->encontraTax(auxString) != nullptr) {
								system("cls");
								escribirTitulos("Buscar personas y vehiculos");
								cout << lalistaTax->encontraTax(auxString)->toString() << "Presione cualquier tecla para continuar"; _getch();
							}
							else if (lalistaAmb->encontraAmb(auxString) != nullptr) {
								system("cls");
								escribirTitulos("Buscar personas y vehiculos");
								cout << lalistaAmb->encontraAmb(auxString)->toString() << "Presione cualquier tecla para continuar"; _getch();
							}
							else {
								cout << "La placa introducida no coincide con ninguna registrada en el sistema....\n"; (opcSalir() == 0) ? q = 0 : 1;
							}
							break;
						case 3:
							q = 0; break;
						default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
						}
					}
					q = 1; break;
				case 5:
					p = 0; break;
				default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
				}
			}
			p = 1; break;
		case 4:
			p = 1;
			while (p) {
				system("cls");
				escribirTitulos("Datos a reportar");
				cout << "-1)  Reportar los datos de la empresa\n";
				cout << "-2)  Reportar el monto total a pagar por parte del hospital por concepto de taxis\n";
				cout << "-3)  Reporte de la persona que ha realizado mas citas en el hospital\n";
				cout << "-4)  Reportar la fecha en que han asistido mayor numero de pacientes\n";
				cout << "-5)  Reportar el tipo de transporte mas utilizado por los pacientes\n";
				cout << "-6)  Reportar lista de ambulancias que se encuentran ocupadas\n";
				cout << "-7)  Reportar lista de tres profesor interinos con la mejor calificacion\n";
				cout << "-8)  Reportar lista de todos los estudiantes internacionales que tengan condicion de exiliado\n";
				cout << "-9)  Salir\nDigite una opcion: "; cin >> opc3;
				switch (opc3)
				{
				case 1:
					system("cls");
					escribirTitulos("Datos de la Empresa");
					cout << elHosp->toString() << endl << "Presione cualquier tecla para continuar"; _getch(); break;
				case 2:
					system("cls");
					escribirTitulos("Monto total por conceptos de taxis");
					cout << "-Monto total: " << lalistaTax->montoTotal() << " colones\n" << "Presione cualquier tecla para continuar"; _getch(); break;
				case 3:
					system("cls");
					escribirTitulos("Persona con mas citas en el hospital");
					if (lalistaCit->listaVacia()) {
						cout << "Actualmente no hay ninguna cita registrada....\n" << "Presione cualquier tecla para continuar"; _getch(); 
					}
					else {
						cout << lalistaCit->pacienteMasCit() << endl << "Presione cualquier tecla para continuar"; _getch();
					}
					break;
				case 4:
					system("cls");
					escribirTitulos("Fecha con mayor asistencia");
					if (lalistaCit->listaVacia()) {
						cout << "Actualmente no hay ninguna cita registrada....\n" << "Presione cualquier tecla para continuar"; _getch(); 
					}
					else {
						cout << lalistaCit->fechaConMasCitas() << endl << "Presione cualquier tecla para continuar"; _getch(); 
					}	
					break;
				case 5:
					system("cls");
					escribirTitulos("Transporte mas utilizado");
					if (contadorTax == 0 && contadorAmb == 0 && contadorProp == 0) {
						cout << "Actualmente no hay ningun medio de transporte asociado a una cita registrada....\n";
					}
					else {
						if (contadorTax > contadorAmb && contadorTax > contadorProp)
							cout << "El medio de transporte mas utilizado por los pacientes es el taxi\n";
						else if (contadorAmb > contadorTax && contadorAmb > contadorProp)
							cout << "El medio de transporte mas utilizado por los pacientes es la ambulancia\n";
						else if (contadorProp > contadorTax && contadorProp > contadorAmb)
							cout << "El medio de transporte mas utilizado por los pacientes es por sus propios medios\n";
						else if (contadorTax == contadorAmb)
							cout << "El medio de transporte mas utilizado por los pacientes es la ambulancia y taxi\n";
						else if (contadorTax == contadorProp)
							cout << "El medio de transporte mas utilizado por los pacientes es por sus propios medios y taxi\n";
						else if (contadorTax == contadorProp && contadorTax == contadorAmb)
							cout << "El medio de transporte mas utilizado por los pacientes es la ambulancia, el taxi y por sus propios medios\n";
					}
					cout << "Presione cualquier tecla para continuar"; _getch(); break;
				case 6:
					system("cls");
					escribirTitulos("Ambulancias ocupadas");
					cout << lalistaAmb->ambulanciasOcu() << endl << "Presione cualquier tecla para continuar"; _getch(); break;
				case 7:
					system("cls");
					escribirTitulos("Profesores interinos con la mejor calificacion");
					cout << lalistaPas->listProfInt() << endl << "Presione cualquier tecla para continuar"; _getch(); break;

				case 8:
					system("cls");
					escribirTitulos("Estudiantes en condicion de exilio");
					cout << lalistaPas->estIntExil() << endl << "Presione cualquier tecla para continuar"; _getch(); break;
				case 9:
					p = 0; break;
				default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
				}
			}
			break;
		case 5:
			system("cls");
			cout << "\t\t";
			printf("%c", 173);
			cout << "Gracias por usar nuestro software! :)\n";
			cout << "\t\t\t\tBy: \n\t\t    Sebastian Penaranda Guerrero\n\t\t           Ced: 1-1844-0262\n\t\t    David Calvo Hernandez\n\t\t           Ced: 4-0254-0670\n";
			con1 = 0; break;
		default: cout << "Opcion incorrecta, vuela a intentarlo presionando enter...."; _getch(); break;
		}
	}
	delete elHosp, auxString, auxString2, auxString3, auxString4, auxString5, auxString6, auxString7, pacienteAux, auxEstInt, auxEstNac, auxProInt, auxProProp, medicoAux, lacita1;
	delete lalistaAmb, lalistaTax, lalistaPas, lalistaMed, lalistaCit;
}