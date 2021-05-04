// 上学迟到。学校到家距离是， 速度v匀速， 额外花10min， 早上8点到校。 为了避免迟到，最晚什么时候出门？可能需要提前一天出门，不可能提前超过一天。输出HH；MM格式
// 60 * (24+8)
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int s, v;
    scanf("%d %d",&s, &v);
    int t_walk = ceil (1.0 * s/v) + 10;
    int from_zero = 60 * (24+8) - t_walk;
    int hh = (from_zero / 60) % 24;
    int mm = from_zero % 60;
    printf("%02d:%02d\n", hh, mm);
    return 0;
}