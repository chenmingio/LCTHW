#include <stdio.h>

int main(int argc,char *argv[])
{
  //create two array we care about
  int ages[] = {23, 45, 12, 0, 3};
  char *names[] = {"Chen Ming", "Tao Yiqiong", "Jiang Yaowen", "Xiao Hongguang", "Pan Bin"};

  //safely get the size of ages
  int count = sizeof(ages) / sizeof(int);
  int i = 0;

  //first way of using index
  for (i=0; i<count; i++){
    printf("%s has position %p.\n", names[i], &(names[i]));
  }

  printf("------\n");

  //set up the pointers to the start of the arrays
  int *cur_age = ages;
  char **cur_name = names;

  //second way using pinters
  for (i=0; i<count; i++) {
    printf("%s is %d years old.\n", *(names+i), *(ages+i));
  }

  printf("-----\n");


  //third ways: pointers are just arrays
  for (i=0; i<count; i++) {
    printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    }

  printf("-------\n");


  //fourth way with pointers in a stupid complex ways
  for (cur_name=names,cur_age=ages;(cur_age-ages)<count;cur_name++,cur_age++){
    printf("%s lived %d years so far.\n", *cur_name, *cur_age);
  }


  return 0;
}
