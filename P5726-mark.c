#include <stdio.h>
int main() {
    int n, i, a, sum, max, min;
    int mark[1111];
    float avg;
    sum = 0;
    min = 10;
    max = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        mark[i] = a;
        sum = sum + a;
    }

    // 找到数组里的最大最小值
    for (i = 0; i < n; i++) {
        if(mark[i] > max) {
            max = mark[i];
        }
        if(mark[i] < min) {
            min = mark[i];
        }
    }
    sum = sum - min - max;
    printf("%.2f\n", ((float)sum/(n - 2))); //这里记得2.0
    return 0;
}