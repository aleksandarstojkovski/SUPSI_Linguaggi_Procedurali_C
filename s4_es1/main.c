#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <string.h>
#include <math.h>

// s4 - es1

#define righe 4
#define colonne 4

int trova_massimo_dei_minimi_matrix_notation(int matrix[][colonne]){

    int min=0, max=0, idx=0, element;
    int array_of_mins[righe]={0};
    for (int i=0; i<righe;i++){
        for (int j=0;j<colonne;j++){
            element = matrix[i][j];
            if (element < min || j==0){
                min=element;
            }
        }
        array_of_mins[idx]=min;
        idx++;
    }

    for(int i=0;i< sizeof(array_of_mins)/4;i++){
        if (i==0 || array_of_mins[i]>max){
            max=array_of_mins[i];
        }
    }

    return max;

}

int trova_massimo_dei_minimi_pointer_notation(int * matrix){
    int min=0, max=0, idx=0, element;
    int array_of_mins[righe]={0};
    for (int i=0; i<righe;i++){
        for (int j=0;j<colonne;j++){
            element = *(matrix+(i*colonne+j));
            if (element < min || j==0){
                min=element;
            }
        }
        array_of_mins[idx]=min;
        idx++;
    }

    for(int i=0;i< sizeof(array_of_mins)/4;i++){
        if (i==0 || array_of_mins[i]>max){
            max=array_of_mins[i];
        }
    }

    return max;
}
int main(int argc, char* argv[]) {
    int matrix[righe][colonne]= {{1,2,1,2}, {3,4,3,4}, {5,6,5,6}, {7,8,7,8}};
    int * matrix_ptr = (int *)matrix;
    int max1 = trova_massimo_dei_minimi_matrix_notation(matrix);
    int max2 = trova_massimo_dei_minimi_pointer_notation(matrix_ptr);
    printf("massimo1: %d\n", max1);
    printf("massimo2: %d\n", max2);

}
