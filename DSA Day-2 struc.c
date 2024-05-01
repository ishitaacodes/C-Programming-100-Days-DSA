#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Maximum size of the stack

// Structure for stack
typedef struct {
    int items[MAX_SIZE];
    int top; // Index of the top element
} Stack;

// Function to initialize the stack
void initializeStack(Stack *stack) {
    stack->top = -1; // Initialize top to -1 (empty stack)
}

// Function to check if the stack is empty
int isEmpty(Stack *stack) {
    return (stack->top == -1);
}

// Function to check if the stack is full
int isFull(Stack *stack) {
    return (stack->top == MAX_SIZE - 1);
}

// Function to push an element onto the stack
void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow! Cannot push element.\n");
        return;
    }
    stack->items[++stack->top] = value; // Increment top and insert the element
    printf("Pushed %d onto the stack.\n", value);
}

// Function to pop an element from the stack
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow! Cannot pop element.\n");
        return -1; // Return -1 to indicate underflow
    }
    return stack->items[stack->top--]; // Return and decrement top
}

// Function to peek the top element of the stack
int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. No top element.\n");
        return -1; // Return -1 to indicate empty stack
    }
    return stack->items[stack->top]; // Return the top element
}

int main() {
    Stack myStack;
    initializeStack(&myStack);

    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);

    printf("Top element: %d\n", peek(&myStack));

    printf("Popped element: %d\n", pop(&myStack));
    printf("Popped element: %d\n", pop(&myStack));
    printf("Popped element: %d\n", pop(&myStack));

    printf("Top element: %d\n", peek(&myStack)); // Stack is empty now

    return 0;
}
