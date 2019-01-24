#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>


// 
//				Esercizio 1 - Test 1
//

int main() {
    int elementi_int;
    char elementi_string[5];
    int * numbers;
    int idx=0;
    long somma=0;

    do {
        printf("Quanti elementi vuoi inserire ? ");
        fgets(elementi_string, 5,stdin);
        elementi_int = atoi(elementi_string);
    } while (elementi_int<0 || elementi_int>UCHAR_MAX);

    numbers = malloc(sizeof(int)*elementi_int);

    for (int i=0;i<elementi_int;i++){
        printf("inserisci elemento numero %d: ",i);
        scanf("%d",&(numbers[i]));
    }

    for (int i=0;i<elementi_int;i++){
        somma+=*(numbers+i);
    }

    printf("\nLa somma di tutti gli elementi e': %ld\n",somma);

    printf("\nRialloco lo spazio da %d a %d\n",elementi_int,elementi_int*2);

    numbers=realloc(numbers, sizeof(int)*elementi_int*2);

    printf("\nRiempio di numeri random i %d spazi appena aggiutni\n",elementi_int);

    srand(time(NULL));

    for (int i=elementi_int;i<elementi_int*2;i++){
        numbers[i]=rand() % 10 + 1;
    }

    printf("\nStampo tutti gli elementi\n");
    for (int i=0;i<elementi_int*2;i++){
        if (i==0){
            printf("Valore\tIndirizzo\n");
        }
        printf("%d\t%p\n",numbers[i],&numbers[i]);
    }
}