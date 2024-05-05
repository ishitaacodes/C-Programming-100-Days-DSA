// Day 9: Stack Implementation using Arrays


#include <stdio.h>
#define MAX_SIZE 100

// Define a structure for the stack
struct Stack {
    int items[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initializeStack(struct Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return (stack->top == -1);
}

// Function to push an element onto the stack
void push(struct Stack* stack, int value) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack overflow!\n");
    } else {
        stack->items[++stack->top] = value;
    }
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow!\n");
        return -1;
    } else {
        return stack->items[stack->top--];
    }
}

int main() {
    struct Stack stack;
    initializeStack(&stack);

    // Push elements onto the stack
    push(&stack, 5);
    push(&stack, 3);
    push(&stack, 8);

    // Pop elements from the stack and print them
    printf("Popped item: %d\n", pop(&stack));
    printf("Popped item: %d\n", pop(&stack));
    printf("Popped item: %d\n", pop(&stack));

    return 0;
}
