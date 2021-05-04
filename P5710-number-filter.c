#include <stdio.h>

int main()
{
    int x;
    bool check_x_1, check_x_2;

    scanf("%d", &x);
    check_x_1 = ((x % 2) == 0);
    check_x_2 = (4 < x && x <= 12);

    printf("%d %d %d %d\n", check_x_1 && check_x_2, check_x_1 || check_x_2, check_x_1 ^ check_x_2, !check_x_1 && !check_x_2);
    return 0;
}