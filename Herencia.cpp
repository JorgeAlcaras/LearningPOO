

#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
  static int numeroAnimales;
  string alimento;

public:
  Animal();
  ~Animal();
  string obtener_Alimento() { return alimento; }
  static int obtenerNumeroAnimales();
  void comer(Animal *x) {
    cout << "Este animal está comiendo " << x->alimento << endl;
  }
};
int Animal::numeroAnimales = 0;

Animal::Animal() {
  cout << "Se ha creado un animal" << endl;
  numeroAnimales += 1;
}
Animal::~Animal() {
  cout << "Se ha destruido un animal" << endl;
  numeroAnimales -= 1;
}

int Animal::obtenerNumeroAnimales() { return numeroAnimales; }

class Herviboro : public Animal {
public:
  Herviboro() : Animal() { this->alimento = "plantas"; }
  void pastar() { cout << "Este animal está pastando..." << endl; }
};

class Carnivoro : public Animal {
public:
  Carnivoro() : Animal() { this->alimento = "carne"; }
  void cazar() { cout << "Este animal está cazando..." << endl; }
};

class Omnivoro : public Herviboro, public Carnivoro {
public:
  Omnivoro() : Herviboro(), Carnivoro() {}
  void comer() { cout << "Este animal está comiendo cualquier cosa" << endl; }
};

int main() {
  Animal *a = new Animal();
  Herviboro *h = new Herviboro();
  Carnivoro *c = new Carnivoro();
  Omnivoro *o = new Omnivoro();

  cout << "Numero de animales: " << Animal::obtenerNumeroAnimales() << endl;

  cout << "Animal" << endl;
  // a->comer();
  cout << "Herviboro" << endl;
  h->pastar();
  // h->comer();
  a->comer(h);
  cout << "Carnivoro" << endl;
  c->cazar();
  // c->comer();
  a->comer(c);
  cout << "Omnivoro" << endl;
  o->comer();
  o->pastar();
  o->cazar();

  delete a;
  cout << "Numero de animales: " << Animal::obtenerNumeroAnimales() << endl;
  return 0;
}
