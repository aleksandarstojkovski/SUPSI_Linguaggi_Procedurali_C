#include <stdio.h>
#include <stdlib.h>


// 
//				Es prep test
//

static int index;
static int INIT_LIST_SIZE=10;
static int BUFFER_SIZE=50;

void add_value_to_list(long value, long * list){
    if (index==INIT_LIST_SIZE){
        INIT_LIST_SIZE+=1;
        realloc(list, sizeof(long)*INIT_LIST_SIZE);
    }
    list[index]=value;

}

long * init_list(){
    long * return_list = malloc(sizeof(int)*INIT_LIST_SIZE);
    return return_list;
}

int main() {
    long value;
    long list = init_list();
    long buffer[BUFFER_SIZE];

    do {
        fgets(buffer,BUFFER_SIZE,stdin);
        strtol()

    }while ();


}
