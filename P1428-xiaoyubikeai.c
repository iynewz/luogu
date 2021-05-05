#include<stdio.h>
int main() {
    int n, i, m, a[111], count, j;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &m);
        a[i] = m;
    }

    for (i = 0; i < n ; i++) {
        count = 0;
        for (j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                count = count + 1;
            }
        }
        printf("%d ", count);
    }
    
    puts("");
    return 0;
}