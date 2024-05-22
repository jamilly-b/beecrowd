#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    
    for(int i = 0; i < num; i++){
        int minutos;
        string tempo;
        
        cin >> minutos >> tempo;
        
        if(tempo == "1T" && minutos > 45){
            cout << "45" << "+" << (minutos - 45) << endl;
        }
        
        else if(tempo == "2T" && minutos > 45){
            cout << "90" << "+" << (minutos - 45) << endl;
        }
        
        else if(tempo =="2T" && minutos < 45){
            cout << 45 + minutos << endl;
        }
        
        else if(tempo == "2T" && minutos == 45){
            cout << "90" << endl;
        }
        
        else{
            cout << minutos << endl;
        }
    }
    
    return 0;
}