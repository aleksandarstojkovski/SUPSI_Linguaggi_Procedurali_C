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
    char c[] = "abcd";
    char *C = "abcd";
    c[1]='A';
    C[0]='A';

    printf("%s\n",c);
    printf("%s\n",C);
}
