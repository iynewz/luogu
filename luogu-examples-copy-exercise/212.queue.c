#include <stdio.h>
// 先进先出，排队结账
#define MAXN 1111
int queue[MAXN];
int head = 0; // 队首，弹出的时候弹出head
int tail = 0; // 队尾指针，push新元素进入 queue[tail] = x1

// 进队，需要判断是否溢出
void push(int x) {
    if(tail >= MAXN) {
        printf("The queue is overflow.\n");
    }
    else {
        queue[tail] = x;
        tail ++;
    }
}

// 弹出队首元素
void pop() {
    if(tail == head ) {
        printf("The queue is empty.\n");
    }
    else head += 1;
}

// 查找队首元素
int front() {
    if(tail == head) {
        printf("The queue is empty.\n");
        return -1;
    }
    else return queue[head];
}

