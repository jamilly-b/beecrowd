#include <iostream>
using namespace std;
 
int main() {
 
    unsigned long long a, b;
    unsigned long long soma = 0;
    
    cin >> a >> b;
    
    soma = ((b - a + 1) * (a + b)) / 2;
    
    cout << soma << endl;
 
    return 0;
}

//(n/2)⋅(a₁+aₙ)