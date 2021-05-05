#include <stdio.h>

int main() {
    int i, m, a[111];
    
    // 输入 n 个数， 最后一个是 0 ，输出 n - 1 个数
    for (i = 0; ; i++) {
        scanf("%d", &m);
        a[i] = m;
        if (m == 0) {
            break;
        }
    }
    for (i = i-1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    puts("");

    return 0;
}