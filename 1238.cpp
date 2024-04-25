#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin >> n;
    cin.ignore();
    
    for(int contador = 0; contador < n; contador++){
        
        string str;

        getline(cin, str);
    
        // separa as 2 palavras
        string str1, str2;
    
        int i = 0;
        while (str[i] != ' ' && i < str.length()) {
            str1 += str[i];
            i++;
        }
    
        i++;
    
        while (i < str.length()) {
            str2 += str[i];
            i++;
        }
    
        // mescla as palavras
        
        int menor = min(str1.length(), str2.length());
        string stringFinal;
        
        for(i = 0; i < menor; i++){
            stringFinal += str1[i];
            stringFinal += str2[i];
        }
        
        if(str1.length() > str2.length()){
            for(i = menor; i < str1.length(); i++){
                stringFinal += str1[i];
            }
        }
        else{
            for(i = menor; i < str2.length(); i++){
                stringFinal += str2[i];
            }
        }
        
        cout << stringFinal << "\n";
    }
    
    return 0;
}