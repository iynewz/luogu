#include <stdio.h>
int main() {
    int l, m, i, a[11111];
    int x, u, v;

    scanf("%d%d", &l, &m);
    for (i = 0; i <= l; i++) {
        a[i] = 1;
    }

    for (i = 0; i < m; i++) {
        scanf("%d%d", &u, &v);
        for (x = u; x <= v; x++) {
            a[x] = 0;
        }
    }

    int sum = 0;
    for (i = 0; i <= l; i++) {
        sum = sum + a[i];
    }

    printf("%d\n", sum);
    return 0;
}