/* 1047 - Tempo de Jogo com Minutos */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int horaInicio, minutoInicio, horaFim, minutoFim;
    
    cin >> horaInicio >> minutoInicio >> horaFim >> minutoFim;

    int inicio, fim, total, totalHoras, totalMinutos;
    
    // Convertendo tudo para minutos
    inicio = horaInicio * 60 + minutoInicio;
    fim = horaFim * 60 + minutoFim;

    // Calculando a duração total em minutos
    if (fim > inicio) {
        total = fim - inicio;
    } else {
        total = (24 * 60 - inicio) + fim;
    }
    
    // Convertendo a duração total para horas e minutos
    totalHoras = total / 60;
    totalMinutos = total % 60;
    
    // Ajuste para caso de duração máxima de 24 horas
    if (totalHoras == 0 && totalMinutos == 0) {
        totalHoras = 24;
    }

    cout << "O JOGO DUROU " << totalHoras << " HORA(S) E " << totalMinutos << " MINUTO(S)" << endl;

    return 0;
}
