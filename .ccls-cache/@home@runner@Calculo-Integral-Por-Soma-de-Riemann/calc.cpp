#include <cmath>
#include <iostream>

using namespace std;

double f(double a, double b, double c, double x) {
  return (a * pow(x, 2) + b * x + c);
}

int main() {
  double a, b, c, deltaX, result;
  int n;
  double inicioInterv, fimInterv;
  int tipoCalc = 0;

  // Entradas

  cout << "Me informe os termos da função" << endl;
  cout << "a: " << endl;
  cin >> a;
  cout << "b: " << endl;
  cin >> b;
  cout << "c: " << endl;
  cin >> c;

  cout << "Me informe o inicio do intervalo da função: " << endl;
  cin >> inicioInterv;
  cout << "Me informe o fim do intervalo da função: " << endl;
  cin >> fimInterv;

  cout << "Quantas subintervalos? " << endl;
  cin >> n;

  cout << "Qual tipo de calculo utilizar? \n Soma á Esquerda (0) \n Soma á "
          "Direita (1)"
       << endl;
  cin >> tipoCalc;

  // Calculo

  result = 0;
  deltaX = (inicioInterv - fimInterv) / (double)n;

  if (tipoCalc == 0) { // Soma á esquerda
    for (int i = 1; i <= n; i++) {
      double ci = inicioInterv + (i - 1) * deltaX;
      result += f(a, b, c, ci) * deltaX;
    }
  }

  cout << "Resultado: \n" << result << endl;
  return 0;
}