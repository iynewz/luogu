#include <stdio.h>
// get all palindormes into an array, 1 ~ 10000 每个数反转补在后面


int num, ch[100], count_digit;
int a, b;

//把输入数字各个数位倒序放入一个数组 输入1258 产生数组 ch = {8,5,2,1}
void ch_digit(int num) {
    int i;
    count_digit = 0;
    while(num != 0) { 
        int digit = num % 10; 
        num = num / 10; 
        // printf("%d\n", digit);
        ch[count_digit] = digit;
        count_digit += 1;
    }
    // printf("count digit = %d\n 倒序为：", count_digit);
}

// 产生偶数回文数
long long turn_even(long long num) {
    for (int i = 0; i < count_digit; i++) {
        num = num * 10 + ch[i];
    }
    return num;
}

// 产生奇数回文数
long long turn_odd(long long num) {
    for (int i = 1; i < count_digit; i++) {
        num = num * 10 + ch[i];
    }
    return num;
}


bool is_in(long long value) {
    return (a <= value && value <= b);
}

int main() {
    
    long long ch_even[100000], ch_odd[100000];
    scanf("%d%d", &a, &b);
    int even_count = 0, odd_count = 0;
    for (int i = 0; i <= 99999; i++) {
        ch_digit(i);
        long long even = turn_even(i);
        ch_even[i] = turn_even(i);
        printf("%lld", even);
        long long odd = turn_odd(i);
        printf(" %lld\n", odd);
        ch_odd[i] = turn_odd(i);
    }

    return 0;
}



