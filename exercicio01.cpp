#include <iostream>
#include "exercicio01.h"
using namespace std;

void returnAge(int age, int &years, int &mouths, int &days){
    years = age / 365;
    age -= years * 365;
    mouths = age / 30;
    age -= mouths * 30;
    days = age;
}


void exercicio01(){
    int ageInDays=0, yearOld=0, months=0, days=0;
    cout << "Digite sua idade em dias: ";
    cin >> ageInDays;
    returnAge(ageInDays, yearOld, months, days);
    cout << "Anos: " << yearOld << endl << "Meses: " << months << endl << "Dias: " << days << endl;
}