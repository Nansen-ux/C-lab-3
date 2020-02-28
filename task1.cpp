#include <stdio.h>
#include "task1.h"
#include <string.h>

int wordCount(char buf[256])

{
	int count = 0;

	for (int i = 0; i < strlen(buf) - 1; i++)
	{
		if ((buf[i] == ' ') && (buf[i + 1] != ' '))
			count++;

	}

	if (buf[0] != ' ')
		count++;
}