#include <stdio.h>

int main(int argc, char *argv[])
{

    int i = 0;

    if (argc == 1)
    {
        printf("you only have one argc. You suck.\n");
    }

    else if (argc > 1 || argc < 4)

    {
        printf("here's your arguments: \n");

        for (i = 0; i < argc; i++)
        {
            printf("%s \n", argv[i]);
        }

        printf("\n");
    }

    return 0;
}