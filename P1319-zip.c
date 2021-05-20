#include <stdio.h>
int N;
int array[222];

int main() {
    
    scanf("%d ", &N);
    int n;
    int i = 0;
    // 读入一段数字，以空格分割，长度不定 
    // do {
    //     int t = 0;
    //     while(((n = getchar()) != EOF) && (n != ' ' && n != '\n')) {
    //         t *= 10;
    //         t += n - '0'; 
    //     }

    //     // printf("i=%d t=%d ", i, t);
    //     array[i++] = t;
    // } while (n != EOF && n != '\n');
    
    for (i = 0; scanf("%d", &array[i]) != EOF; i++);

    for(int k = 0; k < i; k++) {
        printf("%d ", array[k]);
    }

    return 0;
}
