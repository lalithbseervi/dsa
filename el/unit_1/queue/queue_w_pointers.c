#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct my_queue *Queue;

typedef struct my_queue {
    int data[MAX];
    int front;
    int rear;

    void (*display) (void);
    void (*enqueue) (int);
    int (*dequeue) (void);
    int (*peek) (void);
} *Queue;

void enqueue(Queue self, int value) {
    if (self->rear >= MAX - 1) {
        printf("Queue is full. Cannot add anymore elements.\n\n");
        return;
    }

    if (self->front == -1) self->front++;

    self->rear++;
    self->data[self->rear] = value;
    return;
}

int dequeue(Queue self) {
    if (self->rear == -1 || self->front == -1) {
        printf("Queue is empty. Cannot remove elements.\n\n");
        return;
    } 

    int value = self->data[self->front];
    self->front++;
    return value;
}

int peek(Queue self) {
    if (self->rear == -1 && self->front == -1) {
        printf("Queue is empty. Cannot print the first element.\n\n");
        return;
    }

    int value = self->data[self->front];
    return value;
}

void display(Queue self) {
    if (self -> front == -1 && self->rear == -1) {
        printf("Cannot display an empty queue.\n\n");
        return;
    }
    
    for (int i = self->front; i <= self->rear; i++)
        printf("%d ", self->data[i]);
    printf("\n\n");
    return;
}

Queue create_queue() {
    Queue new_queue = malloc(sizeof(struct my_queue));

    if (new_queue != NULL) {
        new_queue->front = -1;
        new_queue->rear = -1;

        new_queue->display = &display;
        new_queue->enqueue = &enqueue;
        new_queue->dequeue = &dequeue;
        new_queue->peek = &peek;
    }

    return new_queue;
}

void main() {
    Queue qp = create_queue();
    if (qp == NULL) {
        printf("Failed to create queue.\nTerminating program...");
        return;
    }

    printf("Queue Operations\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n\n");

    while (1) {
        int choice;

        printf("Enter a choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                int value;
                printf("Enter a number to be added to the queue: ");
                scanf("%d", &value);

                qp->enqueue(value);
                break;
            
            case 2: 
                int removed_element = qp->dequeue();
                printf("Element %d was removed from the queue.\n\n", removed_element);
                break;
            
            case 3: 
                int front_ele = qp->peek();
                printf("Top / Frontmost element is %d.\n\n", front_ele);
                break;
            
            case 4:
                qp->display();
                break;

            case 5:
                printf("Terminating program...\n");
                free(qp);
                return;

            default:
                printf("Invalid choice entered.\nPlease try again.\n");
                break;
        }
    }
}   