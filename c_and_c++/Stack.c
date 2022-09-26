// Stack implementation in C

#include <stdio.h>
#include <stdlib.h>

#define ARRSIZE 10

int count = 0;

// Creating a stack
struct Stack {
  int items[ARRSIZE];
  int top;
};
typedef struct Stack wintun;


// create empty stack
void createEmptyStack(wintun *s){
    s->top = -1;
}

// Check if the stack is full
int isFull(wintun *s){
    if(s->top == ARRSIZE - 1)
        return 1;
    else 
        return 0;
}


// Check if the stack is empty
int isEmpty(wintun *s){
    if(s->top == -1)
        return 1;
    else
        return 0;
}

// Add elements into stack
void push(wintun *s, int data) {
    if(isFull(s)) {
        printf("Stack full.");
    } else {
        s->top++;
        s->items[s->top] = data;
    }
    count++;
}

// Remove element from stack
void pop(wintun *s) {
    if(isEmpty(s)){
        printf("\nStack is empty.\n");
    } else {
        printf("Item poped: %d", s->items[s->top]);
        s->top--;
    }
    count--;
}

// Print elements of stack
void printStack(wintun *s) {
    printf("Stack: ");
    for(int i=0; i<count; i++){
        printf("%d", s->items[i]);
    }
    printf("\n");
}

// Driver code
int main() {
  wintun *s = (wintun *)malloc(sizeof(wintun));

  createEmptyStack(s);

  push(s, 1);
  push(s, 2);
  push(s, 3);
  push(s, 4);

  printStack(s);

  pop(s);

  printf("\nAfter popping out\n");
  printStack(s);
}
