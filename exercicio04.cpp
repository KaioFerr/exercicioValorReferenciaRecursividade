#include <iostream>
#include "exercicio04.h"
using namespace std;

const int ROW_MAX = 20, COLUMN_MAX = 25;


void inputValues(int &m, int &n) {
    cout << "Digite o numero de linhas (m): ";
    cin >> m;
    cout << "Digite o numero de colun (n): ";
    cin >> n;
}


void fillMatrix(int m, int n, int matrix[][COLUMN_MAX]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Digite o elemento de posicao [" << i << "] [" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int m, int n, int matrix[][COLUMN_MAX]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void printSumMatrix(int m, int n, int matrixA[][COLUMN_MAX], int matrixB[][COLUMN_MAX]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int sum = matrixA[i][j] + matrixB[i][j];
            cout << sum << " ";
        }
        cout << endl;
    }
}

void matrixTransposed(int m, int n, int matrix[][COLUMN_MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}

void multiplicationByFactor(int m, int n, int matrix[][COLUMN_MAX]) {
    int factor;
    cout << "Digite o valor de factor: ";
    cin >> factor;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] *= factor;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}


void exercicio04() {
    int m = 0, n = 0, matrixA[ROW_MAX][COLUMN_MAX], matrixB[ROW_MAX][COLUMN_MAX];
    inputValues(m, n);
    if (m <= ROW_MAX && n<= COLUMN_MAX) {
        cout << "MATRIZ A:" << endl;
        fillMatrix(m, n, matrixA);
        printMatrix(m, n, matrixA);
        cout << "MATRIZ TRANPOSTA:" << endl;
        matrixTransposed(m, n, matrixA);
        cout << "MATRIZ MULTIPLICADA PELO FATOR:" << endl;
        multiplicationByFactor(m, n, matrixA);
        cout << "MATRIZ B:" << endl;
        fillMatrix(m, n, matrixB);
        cout << "SOMA DAS MATRIZES" << endl;
        printSumMatrix(m, n, matrixA, matrixB);
    }else {
        cout << "Valores invalidos" << endl;
        return;
    }

}

