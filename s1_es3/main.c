#include <stdio.h>

// 
//				Serie 1 - Esercizio 3
//

long fattoriale(long input){
    if (input<0){
        return -1;
    }
    long risultato=1;
    for (int i=1;i<=input;i++){
        risultato*=i;
    }
    return risultato;
}

int main() {

    long n, k, fattoriale_n, fattoriale_k, risultato;

    do {
        printf("inserisci prima n poi k: ");
        scanf("%ld %ld",&n,&k);
    } while (n<k || n<0 || k<0);

    fattoriale_n=fattoriale(n);
    fattoriale_k=fattoriale(k);
    risultato=fattoriale_n/fattoriale_k;

    printf("Risultato: %ld",risultato);

}