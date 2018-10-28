#include <stdio.h>

// 
//				Serie 1 - Esercizio 1
//

int main() {

    double base;
    double altezza;
    int iterazioni;
    int indent=-15;

    printf("inserisci base: ");
    scanf("%lf",&base);
    printf("inserisci altezza: ");
    scanf("%lf", &altezza);
    printf("inserisci numero di iterazioni: ");
    scanf("%d", &iterazioni);

    printf("%*s %*s %*s %*s %*s\n", indent, "Base", indent, "Altezza", indent, "Perimetro", indent, "Area", indent, "Rapporto");
	
    for (int i=0;i<iterazioni;i++) {
        printf("%*.2f %*.2f %*.2f %*.2f %*.2f\n", indent, base, indent, altezza, indent, (2*base+2*altezza), indent, (base*altezza/2), indent,(2*base+2*altezza)/(base*altezza/2));
        base+=0.1f;
        altezza+=0.1f;
    }

}