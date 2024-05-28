#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++){
        int numero;
        bool primo = true;
        cin >> numero;
        
        for(int j = 2; j*j <= numero; j++){
            if(numero % j == 0){
                cout << "Not Prime" << endl;
                primo = false;
                break;
            }
        }
        
        if(primo == true){
            cout << "Prime" << endl;
        }
    }
    return 0;
}