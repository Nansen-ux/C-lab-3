#include <stdlib.h>
#include <stdio.h>
#include "task4.h"
#define SIZE 256


int main()

{

	char buf[SIZE] = { 0 };

	printf("please, enter a string ");
	fgets(buf, SIZE, stdin);

	printf("sum - %d\n", getSum(buf));

	return 0;