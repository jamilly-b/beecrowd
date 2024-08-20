#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
 
int main() {
    string perna;
    
    while(cin >> perna) {
        if (perna == "esquerda") {
            cout << "ingles" << endl;
        } else if (perna == "direita") {
            cout << "frances" << endl;
        } else if (perna == "nenhuma") {
            cout << "portugues" << endl;
        } else {
            cout << "caiu" << endl; 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }
    }

    return 0;
}