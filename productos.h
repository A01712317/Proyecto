/*
Proyecto Tienda
Emilio Alejandro Cruz Escamilla
A01712317
30/11/2023
*/
/*Este es un pprograma planeado para ayudar a
la funcionalidad de una empresa que se especialice
en la venta de articulos. Al igual que los 
datos sobre los productos que ingresan*/
#include <string>
#ifndef PRODUCTOS_H_
#define PRODUCTOS_H_
// Clase 'producto'
class producto{
    private:
        std::string nombre;  // Nombre del producto
        float costo;  // Costo del producto
        int cantidad;  // Cantidad de productos disponibles
        float capacidad;  // Capacidad del producto (por ejemplo, en litros)
        
    public:
        // Constructor de la clase 'producto'
        producto(std::string n, float co, int c, float cap): nombre(n), costo(co), cantidad(c), capacidad(cap) {}

        // Métodos getter y setter para cada atributo
        std::string getnombre(){return nombre;}
        void setnombre(std::string n){nombre = n;}
        float getcosto(){return costo;}
        void setcosto(float co){costo = co;}
        int getcantidad(){return cantidad;}
        void setcantidad(int c){cantidad = c;}
        float getcapacidad(){return capacidad;}
        void setcapacidad(float c){capacidad = c;}
};

// Clase 'menudeo', que hereda de 'producto'
class menudeo: public producto {
    private:
        float precio;  // Precio del producto al menudeo
    public: 
        // Constructor de la clase 'menudeo'
        menudeo(std::string n, float co, int c, float cap) : producto(n, co, c, cap) {}

        // Método para obtener el precio al menudeo (costo * 1.35)
        float getprecio(){
            precio=getcosto()*1.35;
            return precio;
        }
        // Método para establecer el precio al menudeo
        void setprecio(float p){precio = p;}
};

// Clase 'mayoreo', que hereda de 'producto'
class mayoreo: public producto {
    private:
        float precio;  // Precio del producto al mayoreo
        
    public: 
        // Constructor de la clase 'mayoreo'
        mayoreo(std::string n, float co, int c, float cap) : producto(n, co, c, cap) {}

        // Método para obtener el precio al mayoreo (costo * 1.15)
        float getprecio(){
            precio=getcosto()*1.15;
            return precio;
        }
        // Método para establecer el precio al mayoreo
        void setprecio(float p){precio = p;}
};
#endif
