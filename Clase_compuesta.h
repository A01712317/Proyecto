#include <iostream>
#include <string>
#include "clase1.h"
using namespace std;
class mayoreo_vs_menudeo{
    private:
        mayoreo Mayoreo;
        menudeo Menudeo;
    public:
        mayoreo_vs_menudeo(std::string n, float co, int c, float cap, float pm, float pp): Mayoreo(n, co, c, cap), Menudeo(n, co, c, cap) {
            Mayoreo.setprecio(pm);
            Menudeo.setprecio(pp);
        }
};
