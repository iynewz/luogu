#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int k = (i * n + 1); k <= ((i + 1) * n); k++) {
            printf("%02d", k);
        }
        printf("\n");
    }
    printf("\n");

    for(int i = 0; i < n; i++) {
        for(int k = 0; k < ((n - 1 - i) * 2 ); k++) {
            printf(" ");
        }
        
        for(int k = (i * (i + 1) / 2) + 1; k <= ((i + 2) * (i + 1) / 2); k++) {
            printf("%02d", k);
            
        }
        printf("\n");
    
    }
    return 0;
}
