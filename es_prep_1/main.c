#include <stdio.h>
#include <stdlib.h>


// 
//				Es prep test
//

static int index;
static int INIT_LIST_SIZE = 5;
static const long sentinella = 0;
# define BUFFER_SIZE 50

void print_list(long * list) {
	for (int i = 0; i < index; i++) {
		printf("%ld\n", list[i]);
	}
}
long * reverse_list(long * list) {
	int * new_list = malloc(sizeof(long)*index);
	for (int i = 0; i < index; i++) {
		new_list[i] = list[index-i-1];
	}
	return new_list;
}

void add_value_to_list(long value, long * list) {
	//printf("index=%d, size=%d", index, INIT_LIST_SIZE);
	if (index == INIT_LIST_SIZE) {
		printf("\nLista ingrandita\n");
		INIT_LIST_SIZE += 1;
		realloc(list, sizeof(long)*INIT_LIST_SIZE);
	}
	list[index] = value;
	index++;
}

long * init_list() {
	long * return_list = malloc(sizeof(int)*INIT_LIST_SIZE);
	return return_list;
}

int main() {
	long value;
	long list = init_list();
	long buffer[BUFFER_SIZE];

	do {
		fgets(buffer, BUFFER_SIZE, stdin);
		value = strtol(buffer, NULL, 10);
		if (value != sentinella) {
			add_value_to_list(value, list);
		}

	} while (value != sentinella && index <= INIT_LIST_SIZE);

	list = reverse_list(list);

	printf("lista riordinata: \n");

	print_list(list);

	printf("Fine - premi un tasto per chiudere!");
	getchar();

}
