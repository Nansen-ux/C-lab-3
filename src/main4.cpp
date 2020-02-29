#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

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

int main(int argc, char* argv[])

{
	int sum = my_sum("ab12cd45e");
	printf("%d\n", sum);
	return sum;
}