#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum size for the stack
#define MAX_SIZE 100

// Structure to represent the stack
struct Stack {
    char data[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initialize(struct Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return (stack->top == -1);
}

// Function to check if the stack is full
int isFull(struct Stack *stack) {
    return (stack->top == MAX_SIZE - 1);
}

// Function to push a character onto the stack
void push(struct Stack *stack, char c) {
    if (isFull(stack)) {
        printf("Stack is full. Cannot push %c.\n", c);
    } else {
        stack->data[++stack->top] = c;
    }
}

// Function to pop a character from the stack
char pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return '\0';
    } else {
        return stack->data[stack->top--];
    }
}

int main() {
    char inputString[MAX_SIZE];
    printf("Enter a string: ");
    fgets(inputString, MAX_SIZE, stdin);

    // Remove the newline character from the input string
    inputString[strcspn(inputString, "\n")] = '\0';

    struct Stack stack;
    initialize(&stack);

    // Push each character of the input string onto the stack
    for (int i = 0; i < strlen(inputString); i++) {
        push(&stack, inputString[i]);
    }

    // Pop and print characters from the stack to reverse the string
    printf("Reversed string: ");
    while (!isEmpty(&stack)) {
        printf("%c", pop(&stack));
    }
    printf("\n");

    return 0;
}
