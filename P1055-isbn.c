//0-670-82162-4
#include <stdio.h>
int c[15], checknumber, lastnumber;
int main() {
    for(int i = 0; i < 13; i++) {
        c[i] = (getchar() - '0');
    }

    
    checknumber = 1 * c[0] + 2 * c[2] + 3 * c[3] + 4 * c[4] + 5 * c[6] + 6 * c[7] + 7 * c[8] + 8 * c[9] + 9 * c[10];
    checknumber = checknumber % 11;
    if(checknumber == 10) {
        if(c[12] == 'X') {
            printf("Right\n");
        }
        else{
            for(int i = 0; i < 12; i++) {
            printf("%c", c[i]);
            }
            printf("X\n");
        }
    }

    if(checknumber != 10) {
        if(c[12] == checknumber) {
            printf("Right\n");
        }
        if(c[12] != checknumber) {
            for(int i = 0; i < 13; i++) {
            printf("%c", c[i]);
            }
            printf("X\n");
        }
    }

    return 0;
}