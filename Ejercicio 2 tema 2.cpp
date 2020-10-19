#include <iostream>

#include <math.h>

using namespace std;

int main() {
  double a = 0;
  double b = 0;
  double c = 0;
  double xuno = 0;
  double xdos = 0;
  double i = -9;

  cout << "Ingresa tu x al cuadrado" << endl;
  cin >> a;
  cout << "Ingresa tu x" << endl;
  cin >> b;
  cout << "Ingresa tu termino independiente" << endl;
  cin >> c;

  xuno = (-1 * b + pow(pow(b, 2) - 4 * a * c, 0.5)) / (2 * a);
  xdos = (-1 * b - pow(pow(b, 2) - 4 * a * c, 0.5)) / (2 * a);

  cout << endl;

  cout << " ";
  do {

    if (i < 0) {
      cout << i;
    } else {
      cout << " " << i;
    }

    i++;

  } while (i < 10);
  cout << " ";

  i = -9;
  cout << endl;

  cout << "<";
  do {

    if (xuno == i || xdos == i) {

      cout << " |";

    } else {

      cout << " -";

    }

    i++;

  } while (i < 10);

  cout << ">";

  cout << endl;
  cout << endl;

  cout << "X al cuadrado = " << a << endl;
  cout << "X = " << b << endl;
  cout << "Independiente= " << c << endl;
  cout << "el resultado de x1 = " << xuno << endl;
  cout << "el resultado de x2 = " << xdos << endl;

  return 0;
}