#include <iostream> //luogu 的万能头是 <bits/stdc++.h> 用 iostream 会报错
#include <cstdio> // 这是 scanf 和 printf 的头文件
using namespace std;
int main()
{
    char a,b,c,d;
    scanf("%c%c%c.%c", &a, &b, &c, &d);
    printf("%c.%c%c%c", d, c, b, a); // 这里为什么不用 &, 引用和传值的区别
    return 0;
}