#include <iostream>
#include "Tipos.h"
using namespace std;

double AreaTriangulo(int b, int h){
  return(b*h/2);
}

int main() { double base; double altura;
  cout << " - Ingrese la base: ";
  cin >> base;
  cout << " - Ingrese la altura: ";
  cin >> altura;
  cout << " - El área del triángulo es: " << AreaTriangulo(base, altura);
}
