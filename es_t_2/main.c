#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// 
//				Esercizio Test 2
//

void fattoriale(int number_int, long * result){
    *result=1;
    for (int i=number_int-1;i>0;i--){
        *result+=(*result)*(long)i;
    }
}

int main() {

    char number_char[10];
    int number_int;
    long * result = malloc(sizeof(long));


    do {
        printf("di quale numero vuoi calcolare il fattoriale ? ");
        fgets(number_char,10,stdin);
        number_int = atoi(number_char);
        if (number_int<0){
            printf("\nNumeri negativi non validi!\n");
        } else if (number_int>SHRT_MAX) {
            printf("\nNumero troppo grande!\n");
        } else {
            fattoriale(number_int,result);
        }
    } while (number_int>SHRT_MAX || number_int<0);

    printf("\nil risultato e' %ld\n",*result);
}