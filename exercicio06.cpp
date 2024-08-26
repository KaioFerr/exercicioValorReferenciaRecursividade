#include "exercicio06.h"
#include <iostream>
using namespace std;

/*Exercício 6: Calcular o somatório de 1 à N Recursivamente
 *e Iterativamente. Valores  menores ou iguais a zero representam situações de erro.*/


int somatorio(int n) {
 if (n <= 0) {
  return -1;
 }
 if (n == 1) {
  return 1;
 }
 return n + somatorio(n - 1);

}



void exercicio06() {
 int n = 0;
 cout << "Escolha o valor de N: ";
 cin >> n;
 int resultado = somatorio(n);
 if (resultado == -1)
  cout << "Erro";
 else
  cout << "Resultado: " << resultado<<endl;
}
