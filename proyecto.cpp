/*
Proyecto Tienda
Emilio Alejandro Cruz Escamilla
A01712317
30/11/2023
*/
/*Dentro de este archivo podemos 
inicializar las funciones
*/
//Bibliotecas
#include <iostream>
#include <string>
#include "productos.h"//Objetos:
#include "tienda.h"
#include "empleados.h"
#include "mayoreoomenudeo.h"

using namespace std;
//Opciones
void menu() {
    // Imprime las opciones que va a tener el sistema
    cout << "Menu:\n";
    cout << "1. Mostrar los datos de la tienda. \n";
    cout << "2. Mostrar un producto de menudeo. \n";
    cout << "3. Mostrar un producto de mayoreo. \n";
    cout << "4. Mostrar salario de un empleado casual. \n";
    cout << "5. Mostrar salario de un empleado fijo \n";
    cout << "6. Ver la diferencia entre un precio mayorista y uno minorista \n";
    cout << "0. Salir\n";
}

int main() {
    int opcion;

    // Bucle while que permite al usuario elegir opciones del menú hasta que decida salir (opción 0)
    while (true) {
        // Impresion de menu
        menu();

        // Leer índice que selecciona la opción del menú
        cout << "Ingrese una opcion del menu (0 para salir): " << endl;
        cin >> opcion;
        if (opcion == 0) {
            // Salir del bucle si la opción es 0
            break;
        }
        // Switch donde dependiendo la elección efectúa un diferente procedimiento
        switch (opcion) {
            case 1: {
                // Creas una tienda de la clase 'datostienda'
                datostienda t1("centro", 50,100.55,40.3508,20.230);
                // Imprimes la información de la tienda
                std::cout<<"Ubicación de la tienda: "<<t1.getubicacion()<<std::endl;  
                std::cout<<"Número de empleados: "<<t1.getnumeroempleados()<<std::endl;
                std::cout<<"Ingresos: $"<<t1.getingresos()<<std::endl;
                std::cout<<"Salarios: $"<<t1.getsalarios()<<std::endl;
                std::cout<<"Gastos: $"<<t1.getgastos()<<std::endl;
                // Calculas las ganancias netas de la tienda
                t1.total();
                break;}

            case 2:{
                // Creas un producto de la clase 'menudeo'
                menudeo c1("Boing", 8.5, 20, 1.5);
                // Imprimes la información del producto
                std::cout<<"Producto: "<<c1.getnombre()<<std::endl;  
                std::cout<<"Precio: $"<<c1.getprecio()<<std::endl;  
                std::cout<<"En existencia: "<<c1.getcantidad()<<std::endl;
                std::cout<<c1.getcapacidad()<<" Litros"<<std::endl;
                break;}

            case 3:{
                // Creas un objeto de la clase 'mayoreo'
                mayoreo c2("Jabón", 18.9, 24, 0.5);
                // Imprimes la información del producto
                std::cout<<"Producto: "<<c2.getnombre()<<std::endl;  
                std::cout<<"Precio: $"<<c2.getprecio()<<std::endl;  
                std::cout<<"En existencia: "<<c2.getcantidad()<<std::endl;
                std::cout<<c2.getcapacidad()<<" Litros"<<std::endl;
                break;}

            case 4:{
                // Creas un empleado de la clase 'casual'
                casual e1("Alejandro", 22.0, 3);
                // Imprimes la información del empleado
                std::cout<<"Empleado: "<<e1.getnombre()<<std::endl;  
                std::cout<<"Salario: $"<<e1.getsalario()<<std::endl;
                break;}

            case 5:{
                // Creas un empleado de la clase 'fijo'
                fijo e2("Alejandro", 2000.0);
                // Imprimes la información del empleado
                std::cout<<"Empleado: "<<e2.getnombre()<<std::endl;  
                std::cout<<"Salario: $"<<e2.getsalario()<<std::endl;
                break;}

            case 6:{
                // Creas un objeto de la clase 'mayoreo_vs_menudeo'
                mayoreo_vs_menudeo s("Producto", 10.0, 10, 5.0, 11.5, 13.5);
                // Imprimes el precio al menudeo y el precio al mayoreo del producto
                std::cout << "Precio al menudeo: $" << s.getPrecioMenudeo() << std::endl;
                std::cout << "Precio al mayoreo: $" << s.getPrecioMayoreo() << std::endl;
                break;}
            default:
                cout << "Opcion invalida" << endl;
                break;
        }
    }
    cout << "Saliendo del programa." << endl;
    return 0;
}
