#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <string.h>

// s3 - es3

int main(int argc, char* argv[]) {

    // debug print arguments
    //printf("%d\n%s\n%s\n", argc,argv[1],argv[2]);

    if (argc < 3 || argv[1] == NULL || strcmp(argv[1], "<") != 0 || argv[2] == NULL) {
        printf("Usage: %s < input.txt\n", argv[0]);
        return 1;
    }

    char * input_name = argv[2];
    FILE * file_ptr = fopen(input_name, "r");
    char c;
    int number_of_characters=0;
    int number_of_eol=0;
    int number_of_words=0;
    int number_of_spaces=0;

    if (file_ptr == NULL){
        printf("Error opening file.");
        return 1;
    }

    while (!feof(file_ptr)){
        c = (char)fgetc(file_ptr);
        if (c == '\n'){
            number_of_eol++;
        }
        if (c == ' '){
            number_of_spaces++;
        }
        number_of_characters++;
    }

    fclose(file_ptr);

    if (number_of_spaces==0 && number_of_characters !=0){
        number_of_words=1;
    } else {
        number_of_words=number_of_spaces+1;
    }

    if (number_of_characters>0){
        number_of_eol++;
    }

    number_of_characters=number_of_characters-number_of_eol;

    printf("Number of characters: %d\n",number_of_characters);
    printf("Number of lines: %d\n",number_of_eol);
    printf("Number of words: %d\n",number_of_words);

}
