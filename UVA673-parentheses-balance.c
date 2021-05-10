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

// 把右括号全部换成左括号
char turn_left(int i) {
    if (i == ')') {
        return '(';
    }
    if (i == ']') {
        return '[';
    }
    return '{';
}

int main() {
    int n, j;
    char str[MAX_STACK];
    scanf("%d\n", &n);
    for(int i = 0; i < n; i++) {
        top = 0; // 注意 top 要清空
        scanf("%s", str); //https://stackoverflow.com/questions/5406935/reading-a-string-with-scanf
        // printf("%s\n", str);
        // continue;
        int k = 0;
        int flag = 0;
        while ((j = str[k++]) != 0) {
            if (j == '(' || j == '[' || j == '{') {
                push(j);
            }
            if (j == ')' || j == ']' || j == '}') {
                if (top == 0) {
                    printf("No\n");
                    flag = 1;
                    break;
                }
                if (turn_left(j) == find_top()) {
                    pop();
                }
                else {
                    printf("No\n");
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1) {
            continue;
        }
        if (top == 0) {
            printf("Yes\n");
        }
        else printf("No\n");
    }
    return 0;
}