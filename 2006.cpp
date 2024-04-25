#include <iostream>
using namespace std;

int main() {
    
    int cha, a, b, c, d, e;
    int acertos = 0;
    cin >> cha;
    cin >> a >> b >> c >> d >> e;
    int respostas[] = {a, b, c, d, e};
    
    for(int i = 0; i < 5; i++){
        if (respostas[i] == cha){
            acertos += 1;
        }
    }
    cout << acertos << endl;
    return 0;
}