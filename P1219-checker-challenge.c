#include<stdio.h>
int tot = 0, k = 0;
int n;
int vis[3][27];
int c[16];

// cur means current number of lines
// (cur, c[cur])
void search(int cur) {
    if(cur == n) {
        tot ++;
        if(k < 3) {
            for(cur = 0; cur < n; cur ++) {
                printf("%d ", c[cur]+1);
                
            }
            printf("\n");
            k++;
        }
        
    }
    else{
        for(int i = 0; i < n; i++) {
        //     int ok = 1;
        //     c[cur] = i;
        //     for(int j = 0; j < cur; j++) {
        //         if(c[cur] == c[j] || cur - c[cur] == j - c[j] || cur + c[cur] == j + c[j]) {
        //             ok = 0;
        //             break;
        //       }
        //   }
        //     if(ok == 1) {
        //         search(cur + 1);
        //   } 
            if(!vis[0][i] && !vis[1][cur+i] && !vis[2][cur-i+n]) {
                c[cur] = i;
                vis[0][i] = vis[1][cur+i] = vis[2][cur-i+n] = 1;
                search(cur + 1);
                vis[0][i] = vis[1][cur+i] = vis[2][cur-i+n] = 0;
            }

        }
    }
    
}

int main() {
    scanf("%d", &n);
    search(0);
    printf("%d", tot);
}
