/*
Proyecto Tienda
Emilio Alejandro Cruz Escamilla
A01712317
30/11/2023
*/
/*Aquí puedes registrar los
datos que componen a una tienda*/
#include <iostream>
#include <string>

// Definición de la clase 'datostienda'
class datostienda {
private:
    std::string ubicacion;
    int numero_empleados;
    float ingresos;
    float salarios;
    float gastos;

public:
    // Constructor de la clase 'datostienda' que inicializa los datos de la tienda
    datostienda(std::string u, int no, float in, float g, float s) : ubicacion(u), numero_empleados(no), ingresos(in), salarios(s), gastos(g) {}

    // Métodos de acceso y modificación para los atributos
    std::string getubicacion() { return ubicacion; }
    void setubicacion(std::string u) { ubicacion = u; }
    int getnumeroempleados() { return numero_empleados; }
    void setnumeroempleados(int no) { numero_empleados = no; }
    float getingresos() { return ingresos; }
    void setingresos(float in) { ingresos = in; }
    float getsalarios() { return salarios; }
    void setsalarios(float s) { salarios = s; }
    float getgastos() { return gastos; }
    void setgastos(float g) { gastos = g; }

    // Método para calcular las ganancias netas y mostrar el resultado
    void total();
};

// Implementación del método 'total' que calcula las ganancias netas
void datostienda::total() {
    float ganancias_netas;
    ganancias_netas = ingresos - salarios - gastos;
    std::cout << "Las ganancias netas son: $" << ganancias_netas << std::endl;
}
