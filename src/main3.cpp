#include "task3.h"
#include <stdio.h>
#include <string.h>
#define SIZE 256

int main()



{
	char buf[SIZE];
	char word[SIZE-200];

	int i = 0;

	printf("please, enter a string\n");

	fgets(buf, SIZE, stdin);

	i = getMaxWord(buf, word);

	printf("%s - %i\n", word, i);

	return 0;
}