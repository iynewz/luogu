#include<stdio.h>
int main() {
    bool array[11];
    
    for(int i = 0; i < 10; i++) {
        array[i] = 0;
        array[i] = ! array[i];
        array[i] = ! array[i];
        printf("%d", array[i]);
    }
    return 0; 
}