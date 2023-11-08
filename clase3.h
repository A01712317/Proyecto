#include <string>
class embutidos{
    private:
        std::string nombre;
        float precio;
        int cantidad;
        float capacidad;
        
    public:
        embutidos(std::string n, float p, int c, float cap): nombre(n), precio(p), cantidad(c), capacidad(cap) {}
        std::string ggetnombre(){return nombre;}
        void ssetnombre(std::string n){nombre = n;}
        float ggetprecio(){return precio;}
        void ssetprecio(float p){precio = p;}
        int ggetcantidad(){return cantidad;}
        void ssetcantidad(int c){cantidad = c;}
        float ggetcapacidad(){return capacidad;}
        void ssetcapacidad(float c){capacidad = c;}
};


