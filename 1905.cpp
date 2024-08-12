#include <bits/stdc++.h>
using namespace std;

// Função dfs
bool dfs(vector<vector<int>>& matrix, vector<vector<bool>>& visited, int i, int j) {
    // Verifica se está fora dos limites da matriz ou se a célula já foi visitada ou é um bloqueio (1)
    if(i < 0 || i >= 5 || j < 0 || j >= 5 || visited[i][j] || matrix[i][j] == 1) {
        return false;
    }
    
    // Marca a célula como visitada
    visited[i][j] = true;
    
    // Se chegamos ao ladrão
    if(i == 4 && j == 4) {
        return true;
    }
    
    // Verifica os vizinhos (direita, esquerda, baixo, cima)
    if(dfs(matrix, visited, i + 1, j) ||
       dfs(matrix, visited, i - 1, j) ||
       dfs(matrix, visited, i, j + 1) ||
       dfs(matrix, visited, i, j - 1)) {
        return true;
    }
    
    return false;
}

int main() {
    int num;
    cin >> num;
    
    for(int i = 0; i < num; i++) {
        vector<vector<int>> matrix(5, vector<int>(5, false));
        vector<vector<bool>> visited(5, vector<bool>(5, false));
        
        // Inserindo os valores na matriz
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                int n;
                cin >> n;
                matrix[j][k] = n;
            }
        }
        
        // O policial consegue chegar ao ladrão?
        if(dfs(matrix, visited, 0, 0)) {
            cout << "COPS" << endl;
        } else {
            cout << "ROBBERS" << endl;
        }
        
        // Imprime a matriz de visitados
        // for (const auto& row : visited) {
        //     for (bool space : row) {
        //         cout << space << " ";
        //     }
        //     cout << endl;
        // }
        
        // cout << endl;
    }
    
    return 0;
}