#include <stdio.h>
#include <stdbool.h>

int main(){
    int m, n, soma;
    char str[20];
    
    while(true){
        scanf("%d", &m);
        scanf("%d", &n);
        
        if(m == 0 && n == 0){
            break;
        }
        
        soma = m + n;
        
        sprintf(str, "%d", soma);
        
        for(int i = 0; str[i] != '\0'; i++){
            if(str[i] >= '1' && str[i] <= '9'){
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }
            
    return 0;
}