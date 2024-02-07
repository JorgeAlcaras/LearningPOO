#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
  static int numeroPersonas;
  string nombre;
  int edad;

public:
  Persona(string nombre, int edad);
  void setNombre(string nombre) { this->nombre = nombre; }
  void setEdad(int edad) { this->edad = edad; }
  void saludar();
};
int Persona::numeroPersonas = 0;
void Persona::saludar() {
  cout << "Hola, soy " << nombre << " y tengo " << edad << " años" << endl;
}
Persona::Persona(string nombre, int edad) {
  this->nombre = nombre;
  this->edad = edad;
}

int main() {
  Persona *persona1 = new Persona("Jorge", 19);
  Persona *persona2 = new Persona("Nicolas", 18);

  persona1->saludar();
  persona2->saludar();
}
