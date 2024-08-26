#include "exercicio03.h"
#include <iostream>
using namespace std;


void numHoursAndMinutesSeconds(int minute, int &seconds, int &hours){
    hours = seconds / 3600;
    seconds -= hours * 60;
    minute = seconds / 60;
    seconds -= minute * 60;
}


void exercicio03(){

    int minutes = 0, hours = 0, seconds = 0;
    cout << "Digite uma quantidade de segundos: ";
    cin >> seconds;
    numHoursAndMinutesSeconds(minutes, seconds, hours);
    cout << "Horas: " << hours << endl << "minutos: " << seconds << endl;

}