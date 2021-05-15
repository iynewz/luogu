#include <stdio.h>
#include <math.h>
int s[4]; // four courses
int prob[22];
int left[21], right[21]; // left and right brain


int main() {
    for (int i = 0; i < 4; ++i) {
        scanf("%d", &s[i]);
    }
    int answer = 0;
    for (int t = 0; t < 4; ++t) {
        int n = s[t];
        for (int i = 0; i < n; ++i) {
            scanf("%d", &prob[i]);
        }
        int time_for_each_course = 0x3f3f3f3f;
        // we don't use pow here because it will be evaluated 2^n times! and that is slow!
        // s means state
        for(int s = 0; s < (1<<n); s++){
            int t = s;
            // we decompose t so that we don't mess s up
            int left_time_sum = 0;
            int right_time_sum = 0;
            for(int k = 0; k < n; k++) {
                if (t % 2 == 0) {
                    left_time_sum += prob[k];
                } else {
                    right_time_sum += prob[k];
                }
                t = t / 2;
            }
            int time_consumption = left_time_sum < right_time_sum ? right_time_sum : left_time_sum;
            time_for_each_course = time_for_each_course < time_consumption ? time_for_each_course : time_consumption;
        }
        answer += time_for_each_course;
    }
    printf("%d\n", answer);

    return 0;
}
