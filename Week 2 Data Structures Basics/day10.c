// Day 10: Queue Implementation using Arrays


#include <stdio.h>
#define MAX_SIZE 100

// Define a structure for the queue
struct Queue {
    int items[MAX_SIZE];
    int front, rear;
};

// Function to initialize the queue
void initializeQueue(struct Queue* queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(struct Queue* queue) {
    return (queue->front == -1 && queue->rear == -1);
}

// Function to check if the queue is full
int isFull(struct Queue* queue) {
    return (queue->rear == MAX_SIZE - 1);
}

// Function to enqueue an element into the queue
void enqueue(struct Queue* queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full!\n");
    } else {
        if (isEmpty(queue)) {
            queue->front = 0;
        }
        queue->items[++queue->rear] = value;
    }
}

// Function to dequeue an element from the queue
int dequeue(struct Queue* queue) {
    int item;
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1;
    } else {
        item = queue->items[queue->front];
        if (queue->front == queue->rear) {
            queue->front = -1;
            queue->rear = -1;
        } else {
            queue->front++;
        }
        return item;
    }
}

int main() {
    struct Queue queue;
    initializeQueue(&queue);

    // Enqueue elements into the queue
    enqueue(&queue, 5);
    enqueue(&queue, 3);
    enqueue(&queue, 8);

    // Dequeue elements from the queue and print them
    printf("Dequeued item: %d\n", dequeue(&queue));
    printf("Dequeued item: %d\n", dequeue(&queue));
    printf("Dequeued item: %d\n", dequeue(&queue));

    return 0;
}
