#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int front, rear = -1;

void enqueue(int **queue) {
    if (rear == MAX) {
        printf("Queue is full. Cannot enqueue any element.\n");
        return;
    } else {
        front == -1 ? front++ : front;

        int value;
        printf("Enter the element to be enqueued: ");
        scanf("%d", &value);
        
        rear++;
        queue[rear] = value;

        printf("Added %d to the queue\n\n", value);
    }
}

void dequeue(int **queue) {
    if (rear == -1 && front == -1) {
        printf("Queue is empty. Cannot dequeue any element.\n");
        return;
    } else {
        int value = queue[front];
        
        front++;
        printf("Dequeued %d from the queue.\n\n", value);
    }
}

void peek(int **queue) {
    if (front == rear == -1) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Front-most element: %d\n\n", queue[front]);
}

void display(int **queue) {
    if (front == rear == -1) {
        printf("Queue is empty.\n");
        return;
    }

    for (int i = front; i <= rear; i++)
        printf("%d\t", queue[i]);
    printf("\n\n");
}

int main() {
    int CURRENT_MAX = MAX;
    int *queue_ptr = malloc(sizeof(int) * CURRENT_MAX);

    int choice;
    printf("Queue Operations\n1. Enqueue\n2. Dequeuen\n3. Peek\n4. Display\n5. Exit\n\n");

    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue(queue_ptr);
                break;
            
            case 2:
                dequeue(queue_ptr);
                break;
            
            case 3:
                peek(queue_ptr);
                break;

            case 4:
                display(queue_ptr);
                break;

            case 5:
                printf("Program terminated.\n");
                return 0;
            
            default:
                printf("Invalid Input. Please try again.\n");
                break;
        }
    }    
}