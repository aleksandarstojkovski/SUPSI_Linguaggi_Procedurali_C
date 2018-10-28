#include <stdio.h>
#include <math.h>

// 
//				Serie 1 - Esercizio 4
//

int main() {
    char numero[100];
    int i;

    printf("inserire numero: ");
    scanf("%s", numero);

    for (i=0; i<100;i++){
        if ( numero[i] == '\0' || numero[i] == '\n'){
            break;
        }
        printf(" %c ", numero[i]);
    }
    printf("\nil numero ha %d cifre", i);

    return 0;
}
}

//int cifreInNumero(int numero){
//    int counter=1;
//    if (numero<0.1){
//        return 1;
//    }
//    for (double i=10.0;i<1000000;i=i*10){
//        double test = numero/i;
//        if (test >=0.1 && test <1){
//            return counter;
//        }
//        counter++;
//    }
//}