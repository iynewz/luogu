#include<stdio.h>
int a[1111];
int* b;

int main() {
    printf(" %p\n %p\n %p\n %p\n %p\n", a, a + 1, a - 0, a - 1, a - 2);
    
    b = a;
    printf(" %p\n %p\n %p\n %p\n %p\n", b, b + 1, b - 0, b - 1, b - 2);

    a[3] = 10;
    printf("%d %d %d\n", a[1], *(a+3), *(b+3));
    
    return 0;
}
