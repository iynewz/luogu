#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define bool _Bool


int num, ch[100], count_digit;
int a, b;

//把输入数字各个数位倒序放入一个数组 输入1258 产生数组 ch = {8,5,2,1}
void ch_digit(int num) {
    int i;
    count_digit = 0;
    while(num != 0) { 
        int digit = num % 10; 
        num = num / 10; 
        // printf("%d\n", digit);
        ch[count_digit] = digit;
        count_digit += 1;
    }
    // printf("count digit = %d\n 倒序为：", count_digit);
}

// 产生偶数回文数
long long turn_even(long long num) {
    for (int i = 0; i < count_digit; i++) {
        num = num * 10 + ch[i];
    }
    return num;
}

// 产生奇数回文数
long long turn_odd(long long num) {
    for (int i = 1; i < count_digit; i++) {
        num = num * 10 + ch[i];
    }
    return num;
}

// 判断一个 long long 是否落在区间 [a,b]
bool is_in(long long value) {
    return (a <= value && value <= b);
}

// 判断一个 int 是不是 prime
bool isprime(int value) {
    int j;
    for(j = 2; j * j <= value; j++) {
        if (value % j == 0) {
            return 0;
        }
    }
    return 1;
}
 
// 归并排序（迭代版）
int min(int x, int y) {
    return x < y ? x : y;
}
void merge_sort(long long arr[], int len) {
    long long* a = arr;
    long long* b = (long long*) malloc(len * sizeof(long long));
    int seg, start;
    for (seg = 1; seg < len; seg += seg) {
        for (start = 0; start < len; start += seg + seg) {
            int low = start, mid = min(start + seg, len), high = min(start + seg + seg, len);
            int k = low;
            int start1 = low, end1 = mid;
            int start2 = mid, end2 = high;
            while (start1 < end1 && start2 < end2)
                b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
            while (start1 < end1)
                b[k++] = a[start1++];
            while (start2 < end2)
                b[k++] = a[start2++];
        }
        long long* temp = a;
        a = b;
        b = temp;
    }
    if (a != arr) {
        int i;
        for (i = 0; i < len; i++)
            b[i] = a[i];
        b = a;
    }
    free(b);
}


int main() {
    long long ch_even[100000], ch_odd[100000], ch_final[200000];
    scanf("%d%d", &a, &b);
    int even_count = 0, odd_count = 0;
    for(int i = 0; i <= 99999; i++) {
        ch_digit(i);

        long long even = turn_even(i);    
        if((bool) is_in(even) && (bool) isprime(even)) {
            ch_even[even_count] = even;
            even_count++;
        }
        
        long long odd = turn_odd(i);
        if((bool) is_in(odd) && (bool) isprime(odd)) {
            ch_odd[odd_count] = odd;
            odd_count++;
        }
    }

    int total_count = even_count + odd_count;
    int t;
    for(t = 0; t < even_count; t++) {
        ch_final[t] = ch_even[t];
    }
    for(t = 0; t < odd_count; t++) {
        ch_final[t + even_count] = ch_odd[t];
    }

    /*
    for (int i = 0; i < even_count; i++) {
        ch_final[total_count++] = ch_even[i];
    }
    for (int i = 0; i < odd_count; i++) {
        ch_final[total_count++] = ch_odd[i];
    }
    */

   /*
   int start1 = 0, start2 = 0;
   while (start1 < even_count && start2 < odd_count) {
       printf("%lld\n", ch_even[start1] < ch_odd[start2] ? ch_even[start1++] : ch_odd[start2++]);
   }
   while (start1 < even_count) {
       printf("%lld\n", ch_even[start1++]);
   }
   while (start2 < odd_count) {
       printf("%lld\n", ch_odd[start2++]);
   }
   */


    merge_sort(ch_final, total_count);
    
    for (int k = 0; k < total_count; k++) {
        printf("%lld\n", ch_final[k]);
    }


    /*
    int j;
    for(j = 0; j < even_count; j++) {
        printf("%lld \n", ch_even[j]);
    }
    for(j = 0; j < odd_count; j++) {
        printf("%lld \n", ch_odd[j]);
    }
    */

    return 0;
}
