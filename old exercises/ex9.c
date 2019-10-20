#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 25;
    while (i >= 0)
    {
        printf("%d", i);
        i--;
    }

    // need to add a final new line.
    printf("\n");

    return 0;
}
