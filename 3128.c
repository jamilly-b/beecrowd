#include <stdio.h>

int main() {
    
    int i1, i2;
    
    scanf("%d", &i1);
    scanf("%d", &i2);
    
    if (i1 >= 6 && i2 >= 6) {
        // Primeira condição OK
        if (i1 >= 14 && i2 >= 14) {
            printf("YES\n");
        } else if (i1 >= 18 || i2 >= 18) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    } else {
        printf("NO\n");
    }
 
    return 0;
}