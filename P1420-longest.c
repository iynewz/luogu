#include <stdio.h>
int main() {
    int n, i, m, a[1111], count, array[1111];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &m);
        a[i] = m;
    }

    for (i = 0; i < n; i++) {
        if (a[i] + 1 == a[i+1]) {
            count += 1;
            // 把连续数放入一个数组
            for (int q = 0; ; q++) {
                array[q] = count;
            } 
        } else break;
    }
    // 在array里找最大值
    int max = 0;
    for(int item = 0; ; item++) {
        if(array[item] > max) {
            max = array[item];
        }
        else break;
    }
    printf("%d\n", max);
    return 0;
}