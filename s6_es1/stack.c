//
// Created by aleks on 10.12.2018.
//
#include <stdio.h>
#include <stdlib.h>

static size_t init_size = 10;
static int counter;
static int * values;
static size_t incrase_size=1;

void initStack(){
    counter = 0;
    values = calloc(init_size,sizeof(int));
}

void increase_size(){
    init_size+=incrase_size;
    values = (int *)realloc(values, init_size);
    printf("size incrased, old size is %d, new size is %d\n",init_size-incrase_size,init_size);
}

void destroy_stack(){
    free(values);
}

void update_size(){
    if (init_size-counter==0){
        increase_size();
    }
}

void push(int num){
    update_size();
    values[counter]=num;
    printf("pushing %d\n",values[counter]);
    counter++;
}

int pop(){
    counter--;
    printf("popping %d\n",values[counter]);
    return values[counter];
}

int top(){
    return values[counter-1];
}