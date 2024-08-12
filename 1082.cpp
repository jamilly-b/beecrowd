#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;

int main()
{
  int v, a;
  cin >> v >> a; // Lê o número de vértices (v) e arestas (a)
  vector<vector<int>> lista(v+1); // Inicializa a lista de adjacência com v vetores

  for(int i = 0; i < a; i++) { // Loop para ler as arestas
     char n, m;
     cin >> n >> m;
     int ni = n - 'a'; // Transforma o caracter 'a' para o índice 0
     int mi = m - 'a'; // Transforma o caracter 'a' para o índice 0
     lista[ni].push_back(mi); // Adiciona m à lista de ni
     lista[mi].push_back(ni); // Adiciona ni à lista de mi
  }

  for(int i = 0; i < v; i++) { // Loop para imprimir a lista de adjacência
    cout << "Node " << char('a' + i) << ":";
    for(int v : lista[i]) {
      cout << " " << char('a' + v);
    }
    cout << endl;
  }

 return 0;
}