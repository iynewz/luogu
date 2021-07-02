#include<stdio.h>
#include<math.h>
int i, a, b;

//判断几位数
int how_long(int n) {
    int count = 0;
    while(n != 0) {
        n = n/10;
        count ++;
    }
    return count;
}

// 执行加法、减法、乘法运算，打印两行
int add(int a, int b) {
    int c = a + b;
    int count = how_long(a) + how_long(b) + how_long(c) + 2;
    printf("%d+%d=%d\n", a, b, c);
    printf("%d\n", count);
    return 0;
}

int minus(int a, int b) {
    int c = a - b;
    int count = how_long(a) + how_long(b) + how_long(c) + 2;
    printf("%d-%d=%d\n", a, b, c);
    printf("%d\n", count);
    return 0;
}

int multiplication(int a, int b) {
    int c = a * b;
    int count = how_long(a) + how_long(b) + how_long(c) + 2;
    printf("%d*%d=%d\n%d\n", a, b, c, count);
    return 0;
}



int main() {
    scanf("%d", &i);
    if(getchar() == 'a') {
        scanf("%d %d", &a, &b);
        add(a, b);
    }
     if(getchar() == 'b') {
        scanf("%d %d", &a, &b);
        minus(a, b);
    }
     if(getchar() == 'c') {
        scanf("%d %d", &a, &b);
        multiplication(a, b);
    }
    
    


    return 0;
}
