#include "exercicio02.h"
#include <iostream>
using namespace std;


void numHoursAndMinutes(int minute, int &currentMinute, int &hours){
    hours = minute / 60;
    minute -= hours * 60;
    currentMinute = minute;
}


void exercicio02(){

    int minutes = 0, hours = 0, currentMinutes = 0;
    cout << "Digite quantos minutos se passaram da meia noite: ";
    cin >> minutes;
    numHoursAndMinutes(minutes, currentMinutes, hours);
    cout << "Horas: " << hours << endl << "minutos: " << currentMinutes << endl;

}