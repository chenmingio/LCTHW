#include <stdio.h>

int main (int argc, char const *argv[])
{
	int i;
	while (i < 25) {
		printf("%d\n", i);
		i++;
	}
	
	// need this to add a new line
	printf("\n");
	
	return 0;
}