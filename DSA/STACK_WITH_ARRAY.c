#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

// PUSH
void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }

    top++;                 // move top
    stack[top] = value;    // insert

    printf("Pushed: %d\n", value);
}

// POP
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }

    printf("Popped: %d\n", stack[top]);
    top--;   // remove
}

// PEEK
void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element: %d\n", stack[top]);
    }
}

// DISPLAY
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack:\n");
    for (int i = top; i >= 0; i--) {
        printf("| %d |\n", stack[i]);
    }
}

// MAIN
int main() {
    push(10);
    push(20);
    push(30);

    display();

    peek();

    pop();
    display();

    return 0;
}