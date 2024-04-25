#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int c, N, M;
    
    while(cin >> c){
        
        for(int i = 0; i < c; i++){
            
            cin >> N >> M;
            
            if(N % M == 0){
                cout << int(N/M) << "\n";
            }
            else{
                cout << (int(N/M) + 1 )<< "\n";
            }
        }
    }

    return 0;
}