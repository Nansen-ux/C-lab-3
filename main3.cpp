#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "task3.h"
#define SIZE 256

int main()

{

	char buf[SIZE];
	char *word[SIZE];
	char *tmp1, *max_s, *simv = "., ";
	int max = 0;
	printf("please, enter a string\n");

	gets(buf);

	int getMaxWord(char buf[], char word[]); 

	{
		tmp1 = strtok(buf, simv);

		int i = 0;

		while (tmp1)

		{

			if (tmp1)

			{
				word[i] = tmp1;
				i++;
			}

			tmp1 = strtok(NULL, simv);

		}

		max = strlen(word[0]);

		for (int j = 0; j<i; j++)

		if (strlen(word[j])>max)
		{
			max = strlen(word[j]);
			max_s = word[j];
		}
	}

	{

		printf("%s", max_s);

		getch();

		return 0;
	}
}