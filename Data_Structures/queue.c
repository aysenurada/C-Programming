#include <stdio.h>
#include <stdlib.h>

// Queue Node
struct node {
    int data;
    struct node *next;
};

// front & rear
struct node *front = NULL;
struct node *rear = NULL;

// Enqueue
int enqueue(int data) {
    // Queue is empty
    if (front == NULL) {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new -> data = data;
        new -> next = NULL;
        front = rear = new;
    }
    // Queue isn't empty
    else {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new -> data = data;
        new -> next = NULL;
        rear -> next = new;
        rear = new;
    }
}

// Print Queue
int printQueue() {
    // Queue is empty
    if (front == NULL) {
        printf("Queue is empty\n");
        return 1;
    }
    printf("Queue: ");
    struct node *index = front;
    while (index != NULL) {
        printf("%d - ", index -> data);
        index = index -> next;
    }
    printf("\n");
    return 1;
}

// Delete Queue
int dequeue() {
    // Queue is empty
    if (front == NULL) {
        printf("Queue is empty\n");
        return 1;
    }
    struct node *temp = front;
    front = front -> next;
    free(temp);
    return 1;
}

int main() {
    enqueue(5);
    enqueue(6);
    enqueue(8);
    enqueue(10);

    printQueue();

    dequeue();
    
    printQueue();

    return 1;
}