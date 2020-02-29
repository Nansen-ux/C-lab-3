#include <stdio.h>
#include <string.h>
#define SIZE 256

int main()

{
	char line[SIZE];
	int i = 0;
	int j = 0;
	int words = 0;
	int letters = 0;

	printf("please, enter a line:\n");

	fgets(line, SIZE, stdin);

	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';

	while (line[i])

	{
		if (line[i] != ' ' && j == 0)

		{

			words++;
			letters++;
			j = 1;
			putchar(line[i]);

		}

		else if (line[i] != ' ' && j == 1)

		{
			letters++;
			putchar(line[i]);
		}

		else if (line[i] == ' ' && j == 1)

		{

			j = 0;
			printf(" - %d\n", letters);
			letters = 0;

		}

		i++;

		if (line[i] == '\0' && j == 1)
			break;
	}


	
	printf(": %d\n", letters);
	printf("%d words\n", words);


	return 0;
}