#include <iostream>
using namespace std;

int main() {
    unsigned int num1, num2;

    while (cin >> num1 >> num2) {
        unsigned int xorResult = num1 ^ num2; // operação xor (ou exclusivo)
        cout << xorResult << endl;
    }

    return 0;
}