#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>


static int my_sum(const char *src)
{
	int sum = 0;
	while (*src) {
		while (*src && !isdigit(*src))
			++src;
		sum += atoi(src);
		while (*src && isdigit(*src))
			++src;
	}

	return sum;
}