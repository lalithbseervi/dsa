#include <stdio.h>
#define MAX 5

int queue[MAX];
int front, rear = -1;

void enqueue() {
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

void dequeue() {
    if (rear == -1 && front == -1) {
        printf("Queue is empty. Cannot dequeue any element.\n");
        return;
    } else {
        int value = queue[front];
        
        front++;
        printf("Dequeued %d from the queue.\n\n", value);
    }
}

void peek() {
    if (front == rear == -1) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Front-most element: %d\n\n", queue[front]);
}

void display() {
    if (front == rear == -1) {
        printf("Queue is empty.\n");
        return;
    }

    for (int i = front; i <= rear; i++)
        printf("%d\t", queue[i]);
    printf("\n\n");
}

int main() {
    int choice;
    printf("Queue Operations\n1. Enqueue\n2. Dequeuen\n3. Peek\n4. Display\n5. Exit\n\n");

    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            
            case 2:
                dequeue();
                break;
            
            case 3:
                peek();
                break;

            case 4:
                display();
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