/*
Proyecto Tienda
Emilio Alejandro Cruz Escamilla
A01712317
30/11/2023
*/
/*Aqui podemos comparar cuanto más 
conviene comprar productos al
mayoreo por su diferencia de precio
que mostrará este código*/
#include <iostream>
#include <string>
#include "productos.h"
using namespace std;
#ifndef MAYOREO_MENUDEO_H_
#define MAYOREO_MENUDEO_H_
class mayoreo_vs_menudeo {
private:
    mayoreo Mayoreo;
    menudeo Menudeo;

public:
    // Constructor de la clase 'mayoreo_vs_menudeo'
    mayoreo_vs_menudeo(std::string n, float co, int c, float cap, float pm, float pp) : Mayoreo(n, co, c, cap), Menudeo(n, co, c, cap) {
        // Configuración de los precios al mayoreo y al menudeo
        Mayoreo.setprecio(pm);
        Menudeo.setprecio(pp);
    }

    // Método para obtener el precio al menudeo
    float getPrecioMenudeo() {
        return Menudeo.getprecio();
    }

    // Método para obtener el precio al mayoreo
    float getPrecioMayoreo() {
        return Mayoreo.getprecio();
    }
};
#endif
