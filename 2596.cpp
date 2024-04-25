#include <iostream>
using namespace std;

int main() {
    int c;
    cin >> c;

    while (c--) {
        int n;
        cin >> n;

        int pares = 0;
        for (int i = 2; i <= n; i++) {
            int div = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    div++;
                }
            }
            if (div % 2 == 0) {
                pares++;
            }
        }

        cout << pares << "\n";
    }

    return 0;
}