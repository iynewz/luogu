#include <stdio.h>

// 在一个数 x 中，数字 d 出现了 n 次
int getoccur(int x, int d) {
    int n, d_end;
    n = 0;
    while (x != 0) {
        d_end = x % 10;
        if (d_end == d) {
            n += 1;
        }
        x = x/10;
    }
    return n;
}

int main(){
    int n, x, sum_getoccur;
    sum_getoccur = 0;
    scanf("%d%d", &n, &x);
    for (int i = 1; i < n+1; i = i + 1) {
        int occ = getoccur(i, x);
        sum_getoccur += occ; // <=> sum_getoccur = sum_getoccur + occ;
    }

    printf("%d\n", sum_getoccur);
    return 0;
}