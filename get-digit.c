// 倒序print digit, 放在数组里
#include <stdio.h>
int main() { 
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

    for(i = 0; i < count_digit; i++) {
        printf("%d", ch[i]);
    }

    // 拼接两个数-偶数位


    // 拼接两个数-奇数位
    return 0; 
} 
