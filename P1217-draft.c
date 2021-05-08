
// 判断 i 是不是 prime, 是则输出 1
bool isprime(int i) {
    for（int j = 2; j * j <= i; j++) {
        if (i % j == 0) {
            return 0;
        }
    }
    return 1;
}
