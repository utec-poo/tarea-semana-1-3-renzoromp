#include <iostream>
using namespace std;

int main() { int zona; int claro;
  cout << " - Ingrese la zona en la que se encuentra: ";
  cin >> zona;
  cout << " - Es usted usuario de Claro: SI(1) / NO(2) --> ";
  cin >> claro;
  cout << endl;
  switch(zona){
    case 1: cout << "  *Usted se encuentra ubicado en Super Vip!" << endl;
            if(claro == 1){
              cout << "  *El costo de su entrada es: " << 220 - (220 * 0.2);}
            else
              cout << "  *El costo de su entrada es: " << 220;          
            break;
    case 2: cout << "  *Usted se encuentra ubicado en Vip!" << endl;
            if(claro == 1){
              cout << "  *El costo de su entrada es: " << 170 - (170 * 0.2);}
            else
              cout << "  *El costo de su entrada es: " << 170;          
            break;
    case 3: cout << "  *Usted se encuentra ubicado en Preferencial!" << endl;
            if(claro == 1){
              cout << "  *El costo de su entrada es: " << 136 - (136 * 0.2);}
            else
              cout << "  *El costo de su entrada es: " << 136;          
            break;
    case 4: cout << "  *Usted se encuentra ubicado en General!" << endl;
            if(claro == 1){
              cout << "  *El costo de su entrada es: " << 59 - (59 * 0.2);}
            else
              cout << "  *El costo de su entrada es: " << 59;          
            break;
  }
}
