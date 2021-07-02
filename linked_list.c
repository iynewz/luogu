#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct node Node;
struct node {
    int val;
    Node* next; // next is a pointer with value of an address, 4 or 8 byte
};

Node* newNode(int val) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->val = val;
    node->next = NULL;
    return node;
}

void push_front(Node* head, Node* node) {
    node->next = head->next;
    head->next = node;
}

Node* pop_front(Node* head) {
    Node* first = head->next;
    if (first != NULL) {
        head->next = first->next;
    }
    return first;
}

void push_back(Node* head, Node* node) {
    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = node;
}

void push_back_fast(Node* head, Node* last, Node* newNode) {
    last->next = newNode;
    last = last->next;
}

Node* pop_back(Node* head) {
    Node* tmp = head;
    while (tmp->next != NULL && tmp->next->next != NULL) {
        tmp = tmp->next;
    }
    Node* del = tmp->next;
    tmp->next = NULL;
    return del;
}

void insertAfter(Node* head, int target, Node* node) {
    Node* tmp = head->next;
    while (tmp != NULL && tmp->val != target) {
        tmp = tmp->next;
    }
    if (tmp != NULL) {
        node->next = tmp->next;
        tmp->next = node;
    }
}

Node* deleteFirst(Node* head, int target) {
    Node* tmp = head;
    while (tmp->next != NULL && tmp->next->val != target) {
        tmp = tmp->next;
    }
    Node* del = tmp->next;
    if (del != NULL) {
        tmp->next = del->next;
    }
    return del;
}

// nth returns the position of node in the list, starting from 1
int nth(Node* head, Node* node) {

}

// deleteNode deletes the node from list. It is gauranteed that the node exists.
void deleteNode(Node* head, Node* node) {

}

void printList(Node* head) {
    printf("head->");
    for (Node* node = head->next; node != NULL; node = node->next) {
        printf("%d->", node->val);
    }
    printf("NULL\n");
}

int main() {
    Node* head = newNode(0);
    Node* first = newNode(1);
    Node* second = newNode(2);
    Node* third = newNode(3);
    push_back(head, first);
    push_back(head, second);
    push_back(head, third);
    printList(head);

    push_front(head, newNode(4));
    printList(head);


    
    return 0;
}

/* 
优化点：1.记住链表最后的位置，不用每次遍历找最后一项
2. 双向链表，好处是 

*/
