#include <stdio.h>
int cnt[26], chs[444]; // cnt for count, cnt[0] 表示 A 的数量，cnt[1] 表示 B 的数量……
int max = 0;

int main() {
    char ch;
    int i = 0; // 总共多少个字符

    for(int line = 0; line < 4; line++) {
        while((ch = getchar()) != '\n' && ch != EOF) {
            if(ch <= 'Z' && ch >= 'A') {
                chs[i] = ch;
                i++;
            }
        }
    }
    for(int k = 0; k < i; k++) {
        cnt[chs[k] - 'A']++;
    }
    // for(int t = 0; t < 26; t++) {
    //     printf("%d %c\n", (cnt[t]), 'A' + t);
    // }
    
    // find max
    for(int t = 0; t < 26; t++) {
        if(cnt[t] > max) {
            max = cnt[t];
        }
    }
   
    for(int t = 0; t < max; t++) {
        for(int k = 0; k < 26; k++) {
            if(cnt[k] >= max - t) {
                printf("*");
            }
            else printf(" ");
            if(k != 25) {
                printf(" ");
            }
        }
        printf("\n");
    }

    for(int i = 0; i < 26; i++) {
        printf("%c", ('A' + i));
        if(i != 25) {
            printf(" ");
        }
    }
    return 0;
}
