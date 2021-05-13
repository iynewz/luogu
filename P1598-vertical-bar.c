#include <stdio.h>
int cnt[26], chs[444];
int max = 0;

int main() {
    char ch;
    int i = 0; // 总共多少个字符


    for(int line = 0; line < 4; line++) {
        while((ch = getchar()) != '\n' && ch != '\0') {
            chs[i] = ch;
            if(ch <= 'Z' && ch >= 'A') {
                i++;
            }
        }
    }
    for(int k = 0; k < i; k++) {
        cnt[chs[k] - 'A']++;
    }
    for(int t = 0; t < 26; t++) {
        printf("%d %c\n", (cnt[t]), 'A' + t);
    }
    // find max
    for(int t = 0; t < 26; t++) {
        if(cnt[t] > max) {
            max = cnt[t];
        }
    }
    //print ***
    for(int t = 0; t < max; t++) {
        if(cnt[t] >= )
    }



return 0;
}
