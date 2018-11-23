#include <stdio.h>
#include <stdlib.h>

// 
//				Serie 2 - Esercizio 1
//


struct Stack{
    int elements[100];
    int length;
};
typedef struct Stack Stack;

int pop(Stack * stack){
    int element = stack->elements[stack->length];
    stack->length--;
    return element;
}

int top(Stack * stack){
    return stack->elements[stack->length];
}

void push(int num, Stack * stack){
    stack->elements[stack->length]=num;
    stack->length++;
}

void initializeStack(Stack * stack){
    stack->length=0;
}

void printStack (Stack * stack){
    for (int i=0; i<stack->length;i++){
        printf ("%d element is: %d\n",i,stack->elements[i]);
    }
}

int main(){
    Stack * stack = malloc(sizeof(*stack)); // on the heap memory
    Stack stack2; // on the stack memory
    initializeStack(stack);

    printf("\npushing 10, 20, 30 to the stack\n\n");
    push(10,stack);
    push(20,stack);
    push(30,stack);

    printf("printing content of stack:\n");
    printStack(stack);

    printf("\npopping two elements\n");
    pop(stack);
    pop(stack);

    printf("\nprinting content of stack:\n");
    printStack(stack);

}