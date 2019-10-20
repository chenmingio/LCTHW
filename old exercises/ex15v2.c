#include <stdio.h>

int main(int argc,char *argv[])
{
  //create two array we care about
  int ages[] = {23, 45, 12, 0, 3};

  int *p = ages;

  int i = 0;

  for (i = 0; i < 5; i++) {
    printf("%d : %d.\n", i, *(p+i));
  }

  return 0;

}
