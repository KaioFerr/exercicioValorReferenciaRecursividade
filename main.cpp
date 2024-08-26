#include <iostream>
#include "exercicio01.h"
#include "exercicio02.h"
#include "exercicio03.h"
#include "Exercicio04.h"
#include "Exercicio05.h"
#include "Exercicio06.h"
#include "Exercicio07.h"
using namespace std;


int main()
{
    int i = 0, opcao = 0;
    while (i == 0) {
        cout << "=== Menu de Exercicios ===" << endl;
        cout << "[1] Exercicio01" << endl;
        cout << "[2] Exercicio02" << endl;
        cout << "[3] Exercicio03" << endl;
        cout << "[4] Exercicio04" << endl;
        cout << "[5] Exercicio05" << endl;
        cout << "[6] Exercicio06" << endl;
        cout << "[7] Exercicio07" << endl;
        cout << "[8] Sair" << endl;
        cout << endl << "digite uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << endl << "Exercicio01" << endl;
                exercicio01();
                break;
            case 2:
                cout << "Exercicio02" << endl;
                exercicio02();
                break;
            case 3:
                cout << "Exercicio03" << endl;
                exercicio03();
                break;
            case 4:
                cout << "Exercicio04" << endl;
                exercicio04();
                break;
            case 5:
                cout << "Exercicio05" << endl;
                exercicio05();
                break;
            case 6:
                    cout << "Exercicio06" << endl;
                    exercicio06();
                    break;
            case 7:
                    cout << "Exercicio07" << endl;
                    exercicio07();
                    break;
            case 8:
                cout << "Saindo..." << endl;
                i = 1;
                break;
            default:
                cout << "Opcao invalida!" << endl;
                break;
        }
    }
    return 0;
}