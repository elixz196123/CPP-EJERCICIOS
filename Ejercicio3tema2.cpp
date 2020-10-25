#include <iostream>

#include <math.h>

using namespace std;

int main() {
  int a = 5;
  int b = 12;
  double numerador = 0;
  double denominador = 0;

  numerador = 2 * a * b + 3 * pow(b, 2) + b;
  denominador = pow(a, 2) * pow(b, 2) - 368;

  for (int i = 2; i < 4; i++) {
    numerador = numerador / 2;
    denominador = denominador / 2;
  }

  cout << "El resultado en fracción es: " << numerador << "/" << denominador << endl;
  cout << "El resultado en decimal es: " << numerador / denominador << endl;

  return 0;
}
