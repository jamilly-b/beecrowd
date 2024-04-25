#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    while (true) {
        int M;
        if (!(cin >> M))
            break;

        double somaNotas = 0.0;
        double somaCargas = 0.0;

        for (int i = 0; i < M; ++i) {
            int Ni, Ci;
            cin >> Ni >> Ci;

            somaNotas += static_cast<double>(Ni) * Ci;
            somaCargas += static_cast<double>(Ci);
        }

        double API = somaNotas / (somaCargas * 100);

        cout << fixed << setprecision(4) << API << endl;
    }

    return 0;
}
