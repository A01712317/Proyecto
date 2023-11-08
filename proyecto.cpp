#include <iostream>
#include <string>
#include "clase1.h"
#include "clase2.h"
#include "clase3.h"
#include <string>


int main(){
    datostienda t1("centro", 50,100.55,40.3508,20.230);
    std::cout<<"Ubicación de la tienda: "<<t1.getubicacion()<<std::endl;  // Print the updated name
    std::cout<<"Número de empleados: "<<t1.getnumeroempleados()<<std::endl;
    std::cout<<"Ingresos: $"<<t1.getingresos()<<std::endl;
    std::cout<<"Salarios: $"<<t1.getsalarios()<<std::endl;
    std::cout<<"Gastos: $"<<t1.getgastos()<<std::endl;
    t1.total();
    bebida c1("Boing", 8.5, 20, 1.5);
    std::cout<<"Producto: "<<c1.getnombre()<<std::endl;  // Print the updated name
    std::cout<<"Precio: $"<<c1.getprecio()<<std::endl;  // Print the updated price
    std::cout<<"En existencia: "<<c1.getcantidad()<<std::endl;
    std::cout<<c1.getcapacidad()<<" Litros"<<std::endl;
    embutidos e1("Jamón", 65.8, 3, 8.9);
    std::cout<<"Producto: "<<e1.ggetnombre()<<std::endl;  // Print the updated name
    std::cout<<"Precio: $"<<e1.ggetprecio()<<std::endl;  // Print the updated price
    std::cout<<"En existencia: "<<e1.ggetcantidad()<<" cajas de 9pz"<<std::endl;
    std::cout<<e1.ggetcapacidad()<<" Kilogramos"<<std::endl;
    return 0;
}
