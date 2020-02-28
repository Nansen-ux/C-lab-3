#include <stdio.h>
#include <string.h>
#define SIZE 256

int main()
{
	int map[SIZE] = { 0 };

	const char * str = "To be, or not to be, that is the question";
	int str_len = strlen(str);

	int i;
	for (i = 0; i < str_len; i++)
	{
		map[(unsigned char)str[i]]++;
	}

	for (i = 0; i < SIZE; i++)
	{
		if (map[i])
			printf("'%c' => %d\n", (char)i, map[i]);
	}

	return 0;
}