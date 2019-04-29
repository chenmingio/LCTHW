#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 1.234f;
  double super_power = 2.3456;
  char initial = 'A';
  char first_name[] = "ming";
  char second_name[] = "chen";

  printf("you have %d miles away.\n", distance);
  printf("you have %f level of power.\n", power);
  printf("you have %f awesome super power.\n", super_power);
  printf("I have an initial %c.\n", initial);
  printf("I have a first name %s.\n", first_name);
  printf("I have a second name %s.\n", second_name);
  printf("My whole name is %s %c %s.\n", first_name, initial, second_name);

  int bug = 100;
  double bug_rate = 1.2;

  printf("You have %d bugs with a %f bug rate.\n", bug, bug_rate);

  long universe_of_defects = 1L * 1024L * 1024L * 1024L;
  printf("The entire universe has %ld bugs in total.\n", universe_of_defects);

  double expected_bugs = bug *bug_rate;
  printf("You are expected to have %f bugs.\n", expected_bugs);

  double part_of_universe = expected_bugs / universe_of_defects;
  printf("THis is only %e portition of all bugs.\n", part_of_universe);

  // this makes no sense. Just makes a demo of something weird.

  char null_byte = '\0';
  int care_percentage = null_byte * bug;
  printf("Which means you care %d%% \n", care_percentage);


}
