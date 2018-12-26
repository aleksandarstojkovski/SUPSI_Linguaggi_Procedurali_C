#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <string.h>
#include <math.h>

// s5 - es1

void v1(){
    puts("V1 ");
    FILE * fp = fopen("note_v1.txt","r");
    char c;
    int number_of_votes=0;

    if (fp == NULL){
        printf("Error opening file.");
    }

    while (!feof(fp)){
        c = (char)fgetc(fp);
        if (c >='0' && c<='9') {
            number_of_votes++;
        }
    }

    printf("Numero di voti: %d\n", number_of_votes);
    fclose(fp);

}

void v2(){

    puts("\nV2");
    FILE * fp = fopen("note_v2.txt","r");
    char linea[10];
    int number_of_votes=0;

    if (fp == NULL){
        printf("Error opening file.");
    }

    while (fgets(linea, sizeof(linea),fp) != NULL){
        printf("letto: %f\n", (float)atof(linea));
        number_of_votes++;
    }

    printf("Numero di voti: %d", number_of_votes);
    fclose(fp);

}
int main(int argc, char* argv[]) {
    v1();
    v2();
}
