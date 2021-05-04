// 给出 n 和 n 个整数, 求这 n 个整数中最小值是什么
#include <stdio.h>

int main() {
    int n, i, tmp, min;
    min = 1000;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &tmp);
        if (tmp < min) {
            min = tmp;
        } 
    } 
    printf("%d\n", min);
    return 0;
}