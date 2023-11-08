#include <string>
class bebida{
    private:
        std::string nombre;
        float precio;
        int cantidad;
        float capacidad;
        
    public:
        bebida(std::string n, float p, int c, float cap): nombre(n), precio(p), cantidad(c), capacidad(cap) {}
        std::string getnombre(){return nombre;}
        void setnombre(std::string n){nombre = n;}
        float getprecio(){return precio;}
        void setprecio(float p){precio = p;}
        int getcantidad(){return cantidad;}
        void setcantidad(int c){cantidad = c;}
        float getcapacidad(){return capacidad;}
        void setcapacidad(float c){capacidad = c;}
};


