// 公历纪年法中，能被4整除的大多是闰年，但能被100整除而不能被400整除的年份不是闰年.
// 输入一个年份（大于 1582 的整数 ），判断这一年是否是闰年，如果是输出 1，否则输出 0。

#include <stdio.h>
int main(){
    int y;
    scanf ("%d", &y);
    if ((y % 4) != 0){
        printf ("0\n");
    } else if ((y % 100 == 0) && (y % 400 !=0)){
        printf ("0\n");
    } else printf ("1\n");
    return 0;
}