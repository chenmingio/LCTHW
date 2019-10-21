#include <stdio.h>

int main (int argc, char const *argv[])
{
	int age;
	int weight = 80;
	
	printf("I'm %d years old.\n", age);
	printf("I'm %c kg heavy.\n", weight); //with %s: segment fault. with %c: equals P.
	
	return 0;
}