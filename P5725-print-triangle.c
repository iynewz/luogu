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
        
    }
    return 0;
}
