#include<stdio.h>
int main() {
    int n;
    float total = 0;
    scanf("%d", &n);
    if(n <= 150) {
        total = 0.4463 * n;
    }
    if(n > 150 && n < 401) {
        total = 0.4663 * (n - 150) + 150 * 0.4463;
    }
    if(n > 400) {
        total = 0.5663 * (n - 400) + 150 * 0.4463 + 250 * 0.4663;
    }
    printf("%.1lf", total);
    return 0;
}
