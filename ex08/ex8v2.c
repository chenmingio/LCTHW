#include <stdio.h>

int main (int argc, char const *argv[])
{
	int i = 0;
	
	if(argc ==1)
	{
		printf("You have only one argument.\n");
	} else if(argc > 1 || argc < 4)
	{
		printf("here's your arguments:\n");
		
		for(i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
		printf("\n");
	}
	
	return 0;
}