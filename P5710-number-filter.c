#include <stdio.h>

int main()
{

    int x, check_x_1, check_x_2;

    int a, b, c, d;
    
    scanf("%d", &x);

    if (x % 2 == 0) {
        check_x_1 = 1;
    } else {
        check_x_1 = 0;
    }

    if (4 < x && x <= 12) {
        check_x_2 = 1;
    } else {
        check_x_2 = 0;
    }

    if (check_x_1 == 1 && check_x_2 == 1) {
        a = 1;
    } else {
        a = 0;
    }

    if (check_x_1 == 1 || check_x_2 == 1) {
        b = 1;
    } else {
        b = 0;
    }

    if (check_x_1 == 1 ^ check_x_2 == 1) {
        c = 1;
    } else {
        c = 0;
    }

    if (check_x_1 == 0 && check_x_2 == 0) {
        d = 1;
    } else {
        d = 0;
    }    

    printf("%d %d %d %d \n", a, b, c, d);
    return 0;
}