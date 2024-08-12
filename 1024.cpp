#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    
    int n;
    
    cin >> n;
    cin.ignore();
     
    for (int i = 0; i < n; i++){
        
        string str; 
        getline(cin,str);
        
        for(int i = 0; i < str.size(); i++){
            if(str[i] == ' '){
                str[i] = ' ';
            }
            else if(str[i] >= 65 && str[i] <= 122){
                str[i] = str[i] + 3;
            }
        }
        
        string strcontraria(str.size(), '\0');
        
        for(int i = str.size() - 1, j = 0 ; i >= 0; i--, j++){
            strcontraria[j] = str[i];
        }
        
        for(int i = str.size()/2; i < str.size(); i++){
            strcontraria[i] = strcontraria[i] - 1;
        }
       
        cout << strcontraria << endl;
        
    }
    
    return 0;
}