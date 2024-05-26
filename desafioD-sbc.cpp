#include <iostream>
using namespace std;

int main() {
    double E, V;
    double tempoHoras;
    int horarioSaida = 19;

    cin >> E >> V;

    tempoHoras = (E / V);

    unsigned long int tempoEmMinutos = tempoHoras * 60;

    int minutos = tempoEmMinutos % 60;
    int horas = tempoEmMinutos / 60;

    int horasLevadas = (horarioSaida + horas) % 24;

    if (horasLevadas < 10) {
        if (minutos < 10) {
            cout << "0" << horasLevadas << ":" << "0" << minutos << endl;
        } else {
            cout << "0" << horasLevadas << ":" << minutos << endl;
        }
    } else {
        if (minutos < 10) {
            cout << horasLevadas << ":" << "0" << minutos << endl;
        } else {
            cout << horasLevadas << ":" << minutos << endl;
        }
    }

    return 0;
}
