#include <string>

// Clase 'empleados'
class empleados{
    private:
        std::string nombre;  // Nombre del empleado

    public:
        // Constructor de la clase 'empleados'
        empleados(std::string n): nombre(n) {}

        // Métodos getter y setter para el nombre
        std::string getnombre(){return nombre;}
        void setnombre(std::string n){nombre = n;}
};

// Clase 'fijo', que hereda de 'empleados'
class fijo: public empleados {
    private:
        float salario;  // Salario del empleado

    public: 
        // Constructor de la clase 'fijo'
        fijo(std::string n, float s): empleados(n), salario(s) {}

        // Métodos getter y setter para el salario
        float getsalario(){return salario;}
        void setsalario(float s){salario = s;}
};

// Clase 'casual', que hereda de 'empleados'
class casual: public empleados {
    private:
        float salario;  // Salario del empleado
        int horas_trabajadas;  // Horas trabajadas por el empleado
        float precioxhora;  // Precio por hora de trabajo

    public: 
        // Constructor de la clase 'casual'
        casual(std::string n, int ht, float pxh): empleados(n), horas_trabajadas(ht), precioxhora(pxh) {}

        // Método para obtener el salario (horas trabajadas * precio por hora)
        float getsalario(){
            salario = horas_trabajadas * precioxhora;
            return salario;
        }
        // Método para establecer el salario
        void setsalario(float s){salario = s;}

        // Métodos getter y setter para las horas trabajadas
        int gethoras_trabajadas(){return horas_trabajadas;}
        void sethoras_trabajadas(int ht){horas_trabajadas = ht;}

        // Métodos getter y setter para el precio por hora
        float getprecioxhora(){return precioxhora;}
        void setprecioxhora(float pxh){precioxhora = pxh;}
};
