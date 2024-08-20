#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    int num;
    cin >> num;
    cin.ignore();  // Limpar o buffer de nova linha
    
    while (num--) {
        set<char> dieta;  // Armazena dieta como um conjunto de caracteres
        string cafe, almoco;
        string line;
        
        // Leitura das linhas de entrada
        getline(cin, line);  // Lê a primeira linha (dieta) e insere no set
        for (char c : line) {
            dieta.insert(c);
        }
    
        getline(cin, cafe);  // Lê a segunda linha (cafe)
        getline(cin, almoco);  // Lê a terceira linha (almoco)
    
        // Processa os itens de cafe e almoco
        string combined = cafe + almoco;
        set<char> seen;
        bool cheaterDetected = false;
        
        for (char ch : combined) {
            // Verifica se tem mais de 1 caractere nas refeições
            if (seen.count(ch)) {
                cout << "CHEATER" << endl;
                cheaterDetected = true;
                break;
            }
            seen.insert(ch);
            
            // Verifica se o caractere está na dieta
            if (dieta.count(ch)) {
                dieta.erase(ch);
            } else {
                cout << "CHEATER" << endl;
                cheaterDetected = true;
                break;
            }
        }
        
        if (cheaterDetected) {
            continue;
        }
        
        // Exibe os itens restantes na dieta
        if (dieta.empty()) {
        } else {
            for (char d : dieta) {
                cout << d;
            }
        }
        
        cout << endl;
    }
    
    return 0;
}