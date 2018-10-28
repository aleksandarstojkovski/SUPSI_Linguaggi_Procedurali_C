#include <stdio.h>
#include <math.h>

// 
//				Serie 1 - Esercizio 4
//

void stampa_numero(char numero[], int grandezza_array){
    for (int i=0; i<grandezza_array;i++){
        if ( numero[i] == '\0' || numero[i] == '\n'){
            break;
        }
        printf(" %c ", numero[i]);
    }
}

int controlla_numero(char numero[], int grandezza_array) {
    int i;
    for (i=0; i<grandezza_array;i++){
        if ( numero[i] == '\0' || numero[i] == '\n'){
            break;
        }
    }
    if (i==4){
        printf("SI\n");
    } else {
        printf("NO\n");
    }

    return i;
}

int main() {
    char numero[100];

    printf("inserire numero:");
    scanf("%s", numero);

    if (controlla_numero(numero,100) == 4){
        stampa_numero(numero,100);
    }

    return 0;
}