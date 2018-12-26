#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <string.h>
#include <math.h>

// s4 - es2

void prefix(char * string, char * string_prefix){

    int len = strlen(string);
    char * pch = strstr(string, string_prefix);
    if(pch) {
        for (int i = (int)(pch-string); i < len; ++i) {
            string[i] = string[i+1];
        }
    }

}

int main(int argc, char* argv[]) {
    char * string = "esempio";
    char * string_prefix = "es";
    prefix(string,string_prefix);
    printf("%s", string);

}
