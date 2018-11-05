//
// Created by aleks on 02.11.2018.
//

#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

// return 1 if number is not a string
// return 0 if number is a string
int string_is_number(char str[]){
    int number = atoi(str);
    if (number == 0 && str[0] != 0){
        return 0;
    }
    return 1;
}

// return 1 if string is negative
// return 0 if string is not negative
int number_is_negative(char str[]){
    int i=0;
    while (str[i] != '\0'){
        if (str[i] == '-'){
            return 1;
        }
        i++;
    }
    return 0;
}

// Ex. 153 -> 1^3 + 5^3 + 3^3 = 153
int check_number(char str[]){
    int number=atoi(str);
    int i=0;
    int sum=0;

    for (int i=0;i<strlen(str)-1;i++){
        sum=sum+(str[i]-'0')*(str[i]-'0')*(str[i]-'0');
    }

    if (sum == number){
        return 1;
    } else {
        return 0;
    }
}

int main(){

    char string[10];
    int number_of_characters;

    do{
        printf("Numero positivo di 3 cifre:");
        fgets(string, sizeof(string),stdin);
    }while (strlen(string)-1 != 3 || number_is_negative(string) == 1 || string_is_number(string) != 1);

    if (check_number(string) == 1){
        printf("Risposta: Si");
    } else {
        printf("Risposta: No");
    }

}

