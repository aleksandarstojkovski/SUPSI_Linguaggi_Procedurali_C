#include <stdio.h>

// 
//				Serie 1 - Esercizio 2
//

long fattoriale(long input){
    if (input<0){
        printf("numero non valido!");
        return 1;
    }
    long risultato=1;
    for (int i=1;i<=input;i++){
        risultato*=i;
    }
    return risultato;
}
int main() {

    long n;

    printf("inserisci un numero: ");
    scanf("%ld",&n);
    if (!fattoriale(n)){
        printf("il fattoriale di %ld e': %ld",n,fattoriale(n));
    }
}