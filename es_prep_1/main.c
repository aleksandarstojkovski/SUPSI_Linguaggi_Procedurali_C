#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


// 
//				Es prep test
//

# define BUFFER_SIZE 50
# define SENTINELLA 0

static int index;
static int INIT_LIST_SIZE = 5;

void print_list(long * list) {
	for (int i = 0; i < index; i++) {
		printf("%ld\n", list[i]);
	}
}


void delete_even_numbers(long * list) {
	int * new_list = malloc(sizeof(long)*index);
	int new_index = 0;
	for (int i = 0; i < index; i++) {
		if (list[i] % 2 == 0) {
			list[i] = NULL;
		}
	}
	for (int i = 0; i < index; i++) {
		if (list[i] != NULL) {
			new_list[new_index] = list[i];
			new_index++;
		}
	}
	memcpy(list, new_list, sizeof(long)*new_index);
	index = new_index;
}

void reverse_list(long * list) {
	int * new_list = malloc(sizeof(long)*index);
	for (int i = 0; i < index; i++) {
		new_list[i] = list[index-i-1];
	}
	memcpy(list, new_list, sizeof(long)*index);
}

void add_value_to_list(long value, long * list) {
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
		if (value != SENTINELLA) {
			add_value_to_list(value, list);
		}

	} while (value != SENTINELLA && index <= INIT_LIST_SIZE);

	reverse_list(list);
	printf("\nlista riordinata: \n");
	print_list(list);

	delete_even_numbers(list);
	printf("pari eleminiati: \n");
	print_list(list);

	printf("Fine - premi un tasto per chiudere!");
	getchar();

}
