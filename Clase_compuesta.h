#include <iostream>
#include <string>
#include "clase1.h"
using namespace std;
#ifndef CLASE_COMPUESTA_H_
#define CLASE_COMPUESTA_H_
class mayoreo_vs_menudeo{
    private:
        mayoreo Mayoreo;
        menudeo Menudeo;
    public:
        mayoreo_vs_menudeo(std::string n, float co, int c, float cap, float pm, float pp): Mayoreo(n, co, c, cap), Menudeo(n, co, c, cap) {
            Mayoreo.setprecio(pm);
            Menudeo.setprecio(pp);
        }

        float getPrecioMenudeo() {
            return Menudeo.getprecio();
        }

        float getPrecioMayoreo() {
            return Mayoreo.getprecio();
        }
};
#endif
