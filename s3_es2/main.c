//
// Created by aleks on 02.11.2018.
//

#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

int recursive(int input){

    static int counter = 0;
    int return_value;

    counter++;
    printf("%d ",input);

    if (input == 1){
        return_value=counter;
        printf("\nlunghezza: %d\n", return_value);
        counter=0;
        return return_value;
    }

    if (input % 2 == 0) {
        return recursive(input / 2);
    } else{
       return recursive(input*3+1);
    }

}

int main(){
    int lunghezza;
    int max_lunghezza = 0;
    int max_indice = 0;

    for (int i=100000;i<100020;i++){
        lunghezza=recursive(i);
        if (lunghezza > max_lunghezza){
            max_lunghezza = lunghezza;
            max_indice = i;
        }
    }

    printf("la lunghezza maggiore si ha con n=%d, la lunghezza e' %d",max_indice,max_lunghezza);
}