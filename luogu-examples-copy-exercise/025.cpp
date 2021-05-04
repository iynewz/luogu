// 例2-9 交换变量并输出
#include<cstdio>
using namespace std;
int main(){
    int a, b, t;
    scanf("%d %d", &a, &b);
    t = a, a = b, b = t;
    printf("%d %d\n", a, b); // 输出变量前不需要加&符号
    return 0;
}