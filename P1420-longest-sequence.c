#include <stdio.h>
int n, a[11111];
int s = 1;
int max = 0;
int main() {
    scanf("%d\n", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 1; i < n; i++) {
        if(a[i] == a[i-1] + 1 ) {
            s++;
        }
        else s = 1;
        if(s > max) {
            max = s;
        }
    }
    printf("%d\n", max);
}
