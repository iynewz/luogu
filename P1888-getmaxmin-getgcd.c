// 输入一组勾股数 a,b,c, abc不相等 用分数格式输出其较小锐角的正弦值。（要求约分。）
#include<stdio.h>

int a, b, c;
int max, min, gcd;



int getmax(int a, int b, int c) {
    int max;
    if ((a > b && b > c) || (a > c && c > b)){
        max = a;
    }
    if ((b > a && a > c) || (b > c && c > a)){
        max = b;
    }
    if ((c > a && a > b) || (c > b && b > a)){
        max = c;
    }
    return max;
}

int getmin(int a, int b, int c) {
    int min;
    if ((a < b && b < c) || (a < c && c < b)){
        min = a;
    }
    if ((b < a && a < c) || (b < c && c < a)){
        min = b;
    }
    if ((c < a && a < b) || (c < b && b < a)){
        min = c;
    }
    return min;
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
    scanf ("%d%d%d", &a, &b, &c);
    max = getmax(a,b,c);
    min = getmin(a,b,c);
    gcd = getgcd(max, min);
    printf("%d/%d\n", min/gcd, max/gcd);
    return 0;
}
