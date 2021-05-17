#include <cstdio>

int main() {
   // int a = 1<<2;
   // printf("%d\n", 1<<0);
   // printf("%d\n", 1<<1); // 以二进制表示，1的后面加1个零
   // printf("%d\n", 1<<2); // 以二进制表示，1的后面加2个零
   // printf("%d\n", 1<<3);
   // printf("%d\n", 1<<4);
   // printf("%d\n", 1<<5);
   // printf("%d\n", 1<<6);

   for (int i = 0; i < 32; i = i+1) {
      printf("1<<%d = %d\n", i, 1<<i);
   }
   // printf("%d\n", 5<<1);
   // printf("%d\n", 5>>1); //
   // printf("%d\n", 5>>2); // 右移2位 bit wise operation
}

