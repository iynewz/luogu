#include<stdio.h>
char a;

int main() {
    while((a = getchar()) != '\n') {
        if('a' <= a && a <= 'z') {
            a = a + ('A' - 'a');
            printf("%c", a);
        }
        else printf("%c",a);
    }
    return 0;
}
