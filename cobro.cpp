#include "cobro.h"

double cobro::calcularCosto(float km, int numP) {
    double pT = 0;
    float aux = km - int(km);
    (aux >= 0.5) ? km += (1 - aux) : (aux > 0) ? km -= aux : 0;
    (km == 0) ? pT = 950.00 : 0; //se debe crear un validador donde se ingresen los datos para que km sea siempre mayor a 0 km>0.0
    for (int i = 1; i <= km; i++) 
        (i <= 2) ? pT += 950.00 : (i <= 5) ? pT += 700.00 : pT += 600.00;
    (numP > 1) ? pT += pT * (numP * 0.10): 0;
    return pT;
}
