#include <iostream>
using namespace std;

int main() {
    
    int qtdLojas, qtdTabacoAtual;
    
    // entradas
    cin >> qtdLojas >> qtdTabacoAtual;
    
    int distanciaLojas[qtdLojas], qtdTabacoLojas[qtdLojas];
    
    for(int i = 0; i < qtdLojas; i++){
        cin >> distanciaLojas[i];
    }
    
    for(int i = 0; i < qtdLojas; i++){
        cin >> qtdTabacoLojas[i];
    }
    
    //se a qtd inicial for maior que a maior distancia o programa ja encerra
    
    if(qtdTabacoAtual >= distanciaLojas[qtdLojas - 1]){
        cout << "0" << endl;
    }
    
    else{
            
        int paradas = 0, i = 0;
        while(i < qtdLojas){
            
            // saci deve ou nao parar
            if(qtdTabacoAtual >= distanciaLojas[qtdLojas - 1]){
                cout << paradas << endl;
                break;
            }
            else if(qtdTabacoAtual - distanciaLojas[i] >= distanciaLojas[i+1] - distanciaLojas[i]){
                //saci segue para a proxima loja e gasta as unid de tabacos
                qtdTabacoAtual -= distanciaLojas[i];
            }
            else if(qtdTabacoAtual - distanciaLojas[i] < 0){
                //nao consegue mais continuar
                cout << "-1" << endl;
                break;
            }
            else{
                //saci para em uma loja pra comprar
                qtdTabacoAtual = 0;
                qtdTabacoAtual = qtdTabacoLojas[i];
                paradas++;
            }
            
            
            for(int j = qtdLojas - 1; j >= i; j--){
                distanciaLojas[j] -= distanciaLojas[i];
            }
            
            i++;
        }
    }
    return 0;
}