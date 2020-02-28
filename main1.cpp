#include <stdio.h>
#include "task1.h"
#include <string.h>
#include "task1.cpp"



int main()

{
	int count = 0;
	char buf[256] = { 0 };
	printf("please, enter a string\n");

	fgets(buf, 256, stdin);
	
	for (int i = 0; i < strlen(buf) - 1; i++)
	{
		if ((buf[i] == ' ') && (buf[i + 1] != ' '))
			count++;

	}

	if (buf[0] != ' ')
		count++;

	printf("\n%d", count);

	if (count == 1)
	    printf(" word in your string\n");

	else if (count != 1)
		printf(" words in your string\n");

	return 0;
}