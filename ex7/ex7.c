#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 1000;
    float power = 1.23f;
    double super_power = 23.4567;
    char initial = 'D';
    char first_name[] = "Chen";
    char last_name[] = "Ming";

    printf("You are %dmiles away from school.\n", distance);
    printf("You have %f levels of power\n", power);
    printf("You have %f levels of power\n", super_power);
    printf("You have an initial %c.\n", initial);
    printf("My name is %s.%c.%s\n", first_name, initial, last_name);

    return 0;
}