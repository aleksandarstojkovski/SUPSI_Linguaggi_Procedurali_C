//
// Created by aleks on 02.11.2018.
//

#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

typedef struct Stack{
    int element;
    int * length;
} Stack;

int main (){
    Stack * stack = malloc(sizeof(stack));
    stack->element=4;
    stack->length=malloc(sizeof(int));
    *(stack->length)=3;

    printf("%d",*(stack->length));
}
