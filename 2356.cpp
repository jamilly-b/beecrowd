#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    
    set<string> s;
    
    string joia;
    
    while(cin >> joia)
        s.insert(joia);
    
    cout << s.size() << endl;

    return 0;
}