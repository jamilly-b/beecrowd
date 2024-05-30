#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

struct Sapato {
    int tamanho;
    char ladoDoPe;
};

int main() {
    int n;
    
    while (cin >> n) {
        int pares = 0;
    
        vector<Sapato> sapatos(n);
        
        for (int i = 0; i < n; i++) {
            cin >> sapatos[i].tamanho >> sapatos[i].ladoDoPe;
        }
        
        for (int i = 0; i < n; i++) {
            if (sapatos[i].tamanho == -1) {
                continue;
            }
            for (int j = i + 1; j < n; j++) {
                if (sapatos[j].tamanho == -1) {
                    continue;
                }
                if (sapatos[i].tamanho == sapatos[j].tamanho) {
                    if (sapatos[i].ladoDoPe != sapatos[j].ladoDoPe) {
                        pares++;
                        sapatos[i].tamanho = -1;
                        sapatos[j].tamanho = -1;
                        break;
                    }
                }
            }
        }
        
        cout << pares << endl;
    }

    return 0;
}