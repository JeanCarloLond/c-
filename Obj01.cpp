//importacion de librerias
#include <string>
#include <iostream>

// funcion o clase
class Persona{
    private:
        std::string nombre;
        std::string fechaNacimiento;
        double peso;
        double talla;

    public:
        Persona(const std::string& nombre, 
                const std::string& fechaNacimiento, 
                double peso, 
                double talla):
            nombre(nombre),
            fechaNacimiento(fechaNacimiento),
            peso(peso),
            talla(talla) {}
            
        std::string to_string() const{
            return  "Nombre: " + nombre + ", " +
                    "Fecha de nacieminto: " + fechaNacimiento + ", " +
                    "Peso: " + std::to_string(peso) + " kg. , " +
                    "Talla: " + std::to_string(talla) + " m. ";   
        }
};

//metodo principal
int main(){

    Persona p1("Edi", "18/04/1972", 89.5, 1.72);
    std::cout << p1.to_string() << std::endl;

    return 0;
}