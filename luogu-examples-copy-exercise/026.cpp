// 小鱼游泳的时间 a:b - c:d
#include<cstdio>
using namespace std;
int main(){
    int a, b, c, d, min, e, f;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    min = (c * 60) + d - (a * 60 + b);
    e = min / 60;
    f = min - 60 * e;
    printf("%d %d", e, f ); // 为什么这里有波浪线报错
    return 0;
}
