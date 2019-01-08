#include <stdio.h>
#include <stdlib.h>

void initptrs(char * ptrs[], char values[], int dim){
    for (int i=0;i<dim;i++){
        ptrs[i]=&values[i];
    }
}

int compare(const void *a, const void *b){
    return **(char **)a - **(char **)b;
}

int compare2(const void *a, const void *b){
    return *(char *)a - *(char *)b;
}

void print(char * ptrs[], char values[], int dim){
    printf("\nOriginal values\n");

    for (int i=0;i<dim;i++){
        printf("%c",values[i]);
    }

    printf("\nValues trough pointers\n");
    for (int i=0;i<dim;i++){
        printf( "%c",*(*(ptrs+i)) );
    }
}

int main() {
    char values[]="ecdabf";
    char * ptrs[6];

    initptrs(ptrs, values, 6);

    print(ptrs,values,6);

    // qsort(ptrs,6, sizeof(char *), compare);
    // qsort(values,6, sizeof(char),compare2);

    print(ptrs,values,6);
}