#include<stdio.h>
int lights[2000005];
int n, t, b;
double a;
int main() {
    for(int k = 0; k <2000005; k++) {
        lights[k] = 0; // initialize all the lights (0 means off)
    }

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%lf", &a);
        scanf("%d", &t);
        for(int j = 1; j <= t; j++) {
            b = a * j;
            lights[b] = !(lights[b]);
        }
    }

    for(int i = 0; i < 2000005; i++) {
        if(lights[i] == 1) {
            printf("%d\n", i);  
        }
    }
    return 0;
}
