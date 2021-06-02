/*输入一个偶数 N(N<=10000)N(N<=10000)，
验证4~N所有偶数是否符合哥德巴赫猜想：
任一大于 2 的偶数都可写成两个质数之和。
如果一个数不止一种分法，则输出第一个加数相比其他分法最小的方案。
例如 10，10=3+7=5+5，则 10=5+5 是错误答案。
*/
#include <stdio.h>
#include <stdbool.h>
#define bool _Bool
// 判断一个 int 是不是 prime
bool is_prime(int value) {
    int j;
    for(j = 2; j * j <= value; j++) {
        if (value % j == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, a[5555];
    int ok;
    scanf("%d", &n);
    for(int i = 0; i <((n - 2)/2); i++) {
        a[i] = 4 + 2 * i; // 遍历从 4 到 n 每一个偶数
        ok = 0;
        for(int k = 2; k <= (a[i]/2); k++) {
            if((bool) is_prime (k) && (bool) is_prime (a[i] - k)) {
                printf("%d=%d+%d\n", a[i], k,(a[i] - k));
                ok = 1;
            }
            if(k != 2) {
                k++;
            }
            if(ok == 1) {
                break;    
            }
        }
    }
    return 0;
}
