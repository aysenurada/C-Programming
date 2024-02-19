#include <stdio.h>
#include <stdlib.h>

// Stack Node
struct node {
    int data;
    struct node *next;
};

// Listeye en son giren elemanı yani listenin başını gösteren işaretçi
struct node *top = NULL;

// push - Eleman Ekleme
int push(int data) {
    // Stack is empty
    if (top == NULL) {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new -> data = data;
        new -> next = NULL;
        top = new;
    }
    // Stack isn't empty
    else {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new -> data = data;
        new -> next = top;
        top = new;
    }
    return 1;
}

// pop - Eleman Silme
int pop() {
    // Stack is empty
    if (top = NULL) {
        printf("Stack is empty\n");
        return 1;
    }
    struct node *temp = top;
    top = top -> next;
    free(temp);
    return 1;
}

// Print
int stackPrint() {
    // Stack is empty
    if (top = NULL) {
        printf("Stack is empty\n");
        return 1;
    }
    struct node *index = top;
    while (index != NULL) {
        printf("%d - ", index -> data);
        index = index -> next;
    }
    printf("\n");
    return 1;
}

int main() {
    push(1);
    push(4);
    push(6);

    stackPrint();

    pop();

    stackPrint();

    return 1;
}