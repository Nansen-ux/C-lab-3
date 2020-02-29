#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

void printSizeWords(char *ptr)
{
	int count = 0;

	ptr = strtok(ptr, " ,.");
	while (ptr)
	
	{
		count++;
		printf("word %i: %i\n", count, strlen(ptr));
		ptr = strtok(NULL, " ,.");
	}
}

int main(int argc, char *argv[])

{
	char str[SIZE] = "";

	printf("please, enter a string\n");
	gets(str);

	printSizeWords(str);

	return 0;
}