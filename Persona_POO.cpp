#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
  string nombre;
  int edad;

public:
  static int numeroPersonas;
  Persona(string nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
    numeroPersonas += 1;
  }
  void setNombre(string nombre) { this->nombre = nombre; }
  void setEdad(int edad) { this->edad = edad; }
  void saludar() {
    cout << "Hola, soy " << nombre << " y tengo " << edad << " años" << endl;
  }
};
int Persona::numeroPersonas = 0;

int main() {

  Persona persona1 = Persona("Jorge", 19);
  Persona persona2 = Persona("Nicolas", 18);
  cout << "Numero de personas: " << Persona::numeroPersonas << endl;

  persona1.saludar();
  persona2.saludar();
}
