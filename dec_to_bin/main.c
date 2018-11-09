//
// Created by aleks on 02.11.2018.
//
#include <stdio.h>
#include <math.h>
#include <mem.h>


int main() {

    int a = 1;

    for( int i = 31; i >= 0; i-- ) {
        printf( "%d", ( a >> i ) & 1 ? 1 : 0 );
        if (i%4 == 0)
            printf(" ");
    }
}