
// 判断 i 是不是 prime, 是则输出 1
bool isprime(int i) {
    for（int j = 2; j * j <= i; j++) {
        if (i % j == 0) {
            return 0;
        }
    }
    return 1;
}

//

int dig(int num) {
    ch[111111], i ,count_digit;
    count_digit = 0;
    while(num != 0) { 
        int digit = num % 10; 
        num = num / 10; 
        // printf("%d\n", digit);
        ch[count_digit] = digit; // 1258 倒序排列的 ch[0] = 8, ch[1] = 5, ch[2] = 2  ch[3] = 1
        //1258 8521
        //1258 * 10 + 8
        count_digit += 1;
    }
    printf("count digit = %d\n 倒序为：", count_digit);
}

int turn_odd(int num) {
    for (int i = 0; i < count_digit; i++) {
        num = num * 10 + ch[i];
    }
}