#include <iostream>
#include <string>

using namespace std;

int main() {
  char character = 'A';
  char *pointer = &character;
  string name = "Juan";
  string *pointer2 = &name;
  cout << "Character: " << character << endl;
  cout << "Character int: " << (int *)&character << endl;
  cout << "Pointer int: " << (int *)pointer << endl;
  cout << "*Pointer: " << *pointer << endl;
  cout << "Name: " << name << endl;
  cout << "Name int: " << (int *)&name << endl;
  cout << "Pointer2 int: " << (int *)pointer2 << endl;
  cout << "*Pointer2: " << *pointer2 << endl;
  cout << "Pointer space: " << &pointer << endl;
  cout << "Pointer2 space: " << &pointer2 << endl;
}
