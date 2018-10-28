#include <stdio.h>

// 
//				Serie 1 - Esercizio 2
//

long fattoriale(long input){
    if (input<0){
        return -1;
    }
    long risultato=1;
    for (int i=1;i<=input;i++){
        risultato*=i;
        if (i != input){
            printf("Risultato parziale (%d): %ld\n", i, risultato);
        }
    }
    return risultato;
}

int main() {

    long numero;
    long risultato;

    printf("inserisci un numero: ");
    scanf("%ld",&numero);

    risultato = fattoriale(numero);

    if (risultato != -1){
        printf("\nil fattoriale di %ld e': %ld\n",numero,risultato);
    } else {
        printf("numero non valido!");
    }
}