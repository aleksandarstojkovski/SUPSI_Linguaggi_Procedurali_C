//
// Created by aleks on 10.12.2018.
//

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("pushing numbers from 0 to 9\n");
    for (int i=0;i<10;i++){
        push(i);
    }

    printf("popping 10 items\n");
    for (int i=0;i<10;i++){
        printf("%d",pop());
    }

}