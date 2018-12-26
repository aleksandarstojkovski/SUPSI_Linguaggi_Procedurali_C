//
// Created by aleks on 10.12.2018.
//

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    init_stack();
    printf("**** PUSHING THE ITEMS ****\n");
    for (int i=0;i<15;i++){
        push(i);
    }

    printf("\n**** POPPING THE ITEMS ****\n");
    for (int i=0;i<15;i++){
        pop();
    }

    destroy_stack();

}