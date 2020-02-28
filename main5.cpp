#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"
#define SIZE 256



int main()



{


	int arr[SIZE] = { 0 };

	time_t now;
	time(&now);
	srand(now);
	rand();

	for (int i = 0; i < SIZE; i++)


	{

		if (rand() % 2 * -1)

			arr[i] = rand() % 100;

		else

			arr[i] = -rand() % 100;

	}

	printf("\nGenerate: %d\n", getSumInt(arr, SIZE));

	return 0;

}