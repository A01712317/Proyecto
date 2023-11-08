class datostienda{
    private:
        std::string ubicacion;
        int numero_empleados;
        float ingresos;
        float salarios;
        float gastos;
    public:
        datostienda(std::string u,int no,float in,float g,float s): ubicacion(u), numero_empleados(no), ingresos(in), salarios(s), gastos(g){}
        std::string getubicacion(){return ubicacion;}
        void setubicacion(std::string u){ubicacion=u;}
        int getnumeroempleados(){return numero_empleados;}
        void setnumeroempleados(int no){numero_empleados=no;}
        float getingresos(){return ingresos;}
        void setingresos(float in){ingresos=in;}
        float getsalarios(){return salarios;}
        void setsalarios(float s){salarios=s;}
        float getgastos(){return gastos;}
        void setgastos(float g){gastos=g;} 
        void total();
};
void datostienda::total(){
    float t;
    t=ingresos-salarios-gastos;
    std::cout<<"Las ganancias netas son: $"<<t<<std::endl;
}
