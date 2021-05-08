#include <stdio.h>
// get all palindormes into an array, 1 ~ 10000 每个数反转补在后面

int ch_digit(int num) {
    int num, ch[111111], i ,count_digit;
    scanf("%d", &num);
    count_digit = 0;
    while(num != 0) { 
        int digit = num % 10; 
        num = num / 10; 
        // printf("%d\n", digit);
        ch[count_digit] = digit;
        count_digit += 1;
    }
    printf("count digit = %d\n 倒序为：", count_digit);
}

    
int a[11111], b[11111];
// odd
int main() {
    for (int i = 1; i <= 9; i++) {
        int ch_digit(i);
    }
    return 0;
}



