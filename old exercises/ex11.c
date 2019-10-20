#include<stdio.h>

int main(int argc, char *argv[])
{
  int numbers[4] = {0};
  char name[4] = {'a'};

  // first, print them out raw

  printf("Numbers, %d, %d, %d, %d \n", numbers[0], numbers[1], numbers[2], numbers[3]);

  printf("name each: %c, %c, %c, %c\n", name[0], name[1], name[2], name[3]);

  printf("name: %s", name);

  // setup the numbers manually

  numbers[0] = 1;

  numbers[1] = 2;

  numbers[2] = 3;

  numbers[3] = 4;

  // setup the name

  name[0] = 'C';

  name[1] = 'H';

  name[2] = 'E';

  name[3] = '\0';

  // then print them out intiallized

  printf("Numbers: %d %d %d %d \n", numbers[0], numbers[1], numbers[2], numbers[3]);

  printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

  // print the name like a string

  printf("name: %s\n", name);

  // another way to use name

  char *another = "Chen Ming xxxxx";

  printf("another name: %s\n", another);
  printf("another size: %d\n", sizeof(another));
  printf("another size: %lu\n", sizeof(another));

  printf("another each: %c %c %c %c %c %c.\n", another[0], another[1], another[2], another[3], another[4], another[5]);


  return 0;
}
