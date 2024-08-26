#include "exercicio07.h"
#include <iostream>
using namespace std;


int fibonacci(int n) {
    if (n <= 0) {
        cerr << "Erro: A posicao deve ser maior que zero." << endl;
        return -1;
    }
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}


void exercicio07() {
    int n;

    cout << "Digite a posicao desejada na sequencia de Fibonacci: ";
    cin >> n;

    int resultado = fibonacci(n);
    if (resultado != -1) {
        cout << "Numero de Fibonacci na posicao " << n << " eh: " << resultado << endl;
    }
}