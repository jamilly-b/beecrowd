#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    int n;
    
    cin >> n;
    
    vector<string> ordemQuartos(n);
    map<string, int> ordemIdade; 
    
    for(int i = 0; i < n; i++){
        string nome; cin >> nome;
        ordemQuartos[i] = nome;
    }
    
    for(int i = 0; i < n; i++){
        string nome; cin >> nome;
        ordemIdade[nome] = i;
    }
    
    // percorre os quartos
    for(int i = 0; i < n; i++){
        
        //encontra o mais novo
        int maisNovo = n;
        string irritante;
        for (auto par : ordemIdade) {
            if (par.second < maisNovo) {
                maisNovo = par.second;
                // mais novo é o mais irritante
                irritante = par.first;
            }
        }
        
        // "remove" a pessoa que a cuca passou no quarto da lista das idades
        string parouDeChorar = ordemQuartos[i];
        ordemIdade[parouDeChorar] = n + 1;
        
        cout << irritante << " ";
    }
    
    return 0;
}