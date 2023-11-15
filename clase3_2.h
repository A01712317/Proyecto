#include <string>
class empleados{
    private:
        std::string nombre;
        float salario;
        int horas_trabajadas;
        float precioxhora;
    public:
        empleados(std::string n, float pxh, int ht): nombre(n), precioxhora(pxh), horas_trabajadas(ht) {}

        std::string getnombre(){return nombre;}
        void setnombre(std::string n){nombre = n;}

        float getsalario(){
            salario=horas_trabajadas*precioxhora;
            return salario;}
        void setsalario(float s){salario = s;}

        int gethoras_trabajadas(){return horas_trabajadas;}
        void sethoras_trabajadas(int ht){horas_trabajadas = ht;}

        float getprecioxhora(){return precioxhora;}
        void setprecioxhora(float pxh){precioxhora = pxh;}

        
};


