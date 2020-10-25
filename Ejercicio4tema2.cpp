#include <iostream>

#include <math.h>

using namespace std;

int main() {
  int num = 0;
  int reserva = 1;
  int i = 4;

  cout << "Ingresar numero" << endl;
  cout << endl;
  cin >> num;

  cout << "Multiplicación:" << endl;

  do {

    cout << num;
    reserva = reserva * num;
    num--;
    i--;

    if (i > 0) {
      cout << "x";
    }

  } while (i != 0);

  cout << endl;
  cout << endl;
  cout << "Tu número es: " << num + 4 << endl;
  cout << "El producto es: " << reserva << endl;

  return 0;
}
