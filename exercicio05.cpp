#include "exercicio05.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int pesquisaBinaria(const vector<int> &arr, int valorProcurado) {
    int inicio = 0;
    int fim = arr.size() - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (arr[meio] == valorProcurado)
            return meio;


        if (arr[meio] < valorProcurado)
            inicio = meio + 1;

        else
            fim = meio - 1;
    }
    return -1;
}

void exercicio05() {
    vector<int> arr = {18, 22, 25, 34, 40, 51, 66, 75, 87};
    int i = 0, valorProcurado;
    sort(arr.begin(), arr.end());
    while(i < 3) {
        cout << "Digite um valor para ser procurado no vetor: ";
        cin >> valorProcurado;
        int resultado1 = pesquisaBinaria(arr, valorProcurado);
        if (resultado1 != -1) {
            cout << "Elemento "<< valorProcurado <<" encontrado no indice: " << resultado1 << endl;
        }
        else {
            cout << "Elemento nao encontrado"<< endl;
        }
        i++;
    }
}
