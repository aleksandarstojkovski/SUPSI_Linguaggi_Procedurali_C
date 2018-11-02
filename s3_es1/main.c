//
// Created by aleks on 02.11.2018.
//

#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

int check_string_is_number(char str[]){
    int number = atoi(str);
    if (number == 0 && str[0] != 0){
        return 1;
    }
    return 0;
}

int check_number_is_not_negative(char str[]){
    int i=0;
    while (str[i] != '\0'){
        if (str[i] == '-'){
            return 1;
        }
        i++;
    }
    return 0;
}

/*
int check_number_of_digits(char str[]){
    int i=0;
    while (str[i] != '\0'){
        i++;
    }
    return i-1;
}
*/

int main(){
    char string[10];
    int number_of_characters;

    do{
        printf("Numero positivo di 3 cifre:");
        fgets(string, sizeof(string),stdin);
    }while (strlen(string)-1 != 3 || check_number_is_not_negative(string) != 0 || check_string_is_number(string) != 0);

   // check_number(string);

}

