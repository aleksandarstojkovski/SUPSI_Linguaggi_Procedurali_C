//
// Created by aleks on 10.12.2018.
//

#define MAX_SIZE 10

int counter = 0;
int values[MAX_SIZE];

void push(int num){
    values[counter]=num;
    counter++;
}

int pop(){
    counter--;
    return values[counter];
}

int top(){
    return values[counter-1];
}