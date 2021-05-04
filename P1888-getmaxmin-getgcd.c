// 输入一组勾股数 a,b,c, abc不相等 用分数格式输出其较小锐角的正弦值。（要求约分。）
#include<stdio.h>

int getmax(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    }
    if (b > a && b > c) {
        return b;
    }
    return c;
}

int getmin(int a, int b, int c) {
    if (a < b && a < c) {
        return a;
    }
    if (b < a && b < c) {
        return b;
    }
    return c;
}

// 找最大公约数
int getgcd(int x, int y) {
    int z = y;
    while (x % y != 0) {
        z = x % y;
        x = y;
        y = z;
    }
    return z;
}

int main() {
    int a, b, c;
    int max, min, gcd;

    scanf("%d%d%d", &a, &b, &c);
    max = getmax(a, b, c);
    min = getmin(a, b, c);
    gcd = getgcd(max, min);
    printf("%d/%d\n", min/gcd, max/gcd);
    return 0;
}
