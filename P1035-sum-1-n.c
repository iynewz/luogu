#include <stdio.h>
int main() {
    int k, n;
    double sum;
    sum = 0;
    scanf("%d", &k);
    for (n = 1; sum <= k; n++) {
        sum = sum + (double)1.0/n; // 记得转换成浮点数
        // printf("sum = %f\n", sum);
    }
    printf("%d\n", (n-1));
    return 0;
}


// 第一遍写了float， 精度不够。验证 k = 15 值不同