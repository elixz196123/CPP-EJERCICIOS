#include <iostream>

#include <math.h>

using namespace std;

int main() {
  int num = 1;
  int reserva = 0;
  int i = 0;

  cout << endl;

  do {
    reserva = reserva + num;
    num++;
    i++;

  } while (i != 1000);

  cout << endl;
  cout << endl;

  cout << "La suma del 1 al 1000 es: " << reserva << endl;

  return 0;
}
