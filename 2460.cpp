#include <iostream>
using namespace std;

int main()
{
    
    int qtdFilaInicio, qtdSaiuFila;
    
    cin >> qtdFilaInicio;
    
    int filaNumIdentificador[qtdFilaInicio];
    
    for(int i = 0; i < qtdFilaInicio; i++){
        int identificador;
        cin >> identificador;
        filaNumIdentificador[i] = identificador;
    }
    
    cin >> qtdSaiuFila;
    for(int i = 0; i < qtdSaiuFila; i++){
        
        int idSaiuFila;
        cin >> idSaiuFila;
        
        for(int j = 0; j < qtdFilaInicio; j++){
            
            if(filaNumIdentificador[j] == idSaiuFila){
                for(j; j < qtdFilaInicio - 1; j++){
                    filaNumIdentificador[j] = filaNumIdentificador[j+1];
                }
            }
            
        }
        
    }
    
    for(int i = 0; i < (qtdFilaInicio - qtdSaiuFila); i++){
        cout << filaNumIdentificador[i] << " ";
    }

    cout << endl;
    
    return 0;
}


