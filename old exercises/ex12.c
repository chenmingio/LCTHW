#include <stdio.h>

int main(int argc,char *argv[])
{
  int i = 0;

  argv[1] = "ChenXiaoBao";
  //go through each string argc
  // why am I skipping argv[0]?
  for (i=1; i<argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  //let's make our own array of strings
  char *states[] = {"ABC", NULL, "Washington DC"};
  int state_num = 3;

  for (i = 0; i < state_num; i++) {
    printf("state %d: %s.\n", i, states[i]);
  }


  return 0;
}
