#include<stdio.h>

int getmax(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    }
    if (b >= a && b >= c) {
        return b;
    }
    return c;
}

int getmin(int a, int b, int c) {
    if (a <= b && a <= c) {
        return a;
    }
    if (b <= a && b <= c) {
        return b;
    }
    return c;
}

int main() {
    int a, b, c, max, min, mid;
    scanf("%d%d%d", &a, &b, &c);

    max = getmax(a, b, c);
    min = getmin(a, b, c);
    mid = a + b + c - max - min;

    if ((a+b+c) <= (2 * max)) { 
        printf("Not triangle\n");
        return 0;
    }

    if (min * min + mid * mid == max * max) {
        printf("Right triangle\n");
    }

    if (min * min + mid * mid > max * max) {
        printf("Acute triangle\n");
    }

    if (min * min + mid * mid < max * max) {
        printf("Obtuse triangle\n");
    }

    if (min == mid || max == mid) {
        printf("Isosceles triangle\n");
    }

    if (max == min && min == mid) {
        printf("Equilateral triangle\n");
    } 
    
    return 0;
}