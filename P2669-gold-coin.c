#include <stdio.h>
int main() {
    // 当前金币数为 i， j 表示当前金币数给了几次。当 i = j , j 返回为 0 ； i = i + 1；
    int i, j, k, t, sum;
    sum = 0;
    scanf("%d", &k);
    i = 1;
    j = 0;
    for (t = 1; t <= k; ++t) {
        sum += i; // sum = sum + i;
        j++;
        if (i == j) {
            j = 0;
            i = i + 1; // i++
        }
    }
    printf("%d\n", sum);
    return 0;
}