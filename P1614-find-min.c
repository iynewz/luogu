#include <stdio.h>
int n, m;
int a[3333];
int total[3333];

int find_total(int start) {
    int total = 0;
    for(int i = start; i < start + m; i++){
        total += a[i];
    }
    return total;
}

int main() {
    scanf("%d %d\n", &n, &m);
    for(int i = 0; scanf("%d", &a[i]) != EOF; i++);
    for(int start = 0; start < (n - m + 1); start++) {
        total[start] = find_total(start);
    }
    
    int min = 333333;

    for(int i = 0; i < (n - m + 1); i++) {
        if(total[i] < min) {
            min = total[i];
        }
    }

    printf("%d", min);  

    return 0;
}