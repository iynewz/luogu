#include <stdio.h>
#include <stdbool.h>
#define MAX_STACK 129

int stack[MAX_STACK];
int top = 0; // top = 1 时， 元素有一个， 元素位置在 stack[0],

// 弹出栈顶元素
void pop() {
    if (top != 0) {
        top -= 1;
    }
    else printf("The stack is empty"); // The stack is empty.
}

// 压栈
void push(int x) {
    if (top >= MAX_STACK) {
        printf("Stack overflow."); // Stack overflow.
    }
    stack[top] = x;
    top ++;
}

// 查找栈顶元素
int find_top() {
    if (top != 0) {
        return stack[top - 1];
    }
        // ptintf("The stack is empty.");
    return -1;
}



int main() {
    char ch;
    int item = 0;
    while(ch != '@') {
        ch = getchar();
        printf("%s\n", &ch);
        if('0' <= ch && ch <= '9') {
            item = 10 * item + ch - '0';
            push(item);
        }
        if(ch == '.') {
            push(0);
        }
        else {
            pop();
            int x = find_top();
            pop();
            int y = find_top();
            pop();
            if(ch == '+') { 
                push(x+y);
            }
            if(ch == '-') {
                push(y - x);
            }
            if(ch == '*') {
                push(x*y);
            }
            if(ch == '/') {
                push(y / x);
            }

        }
        
    }
    printf("%d\n", (int)find_top);
    return 0;
}