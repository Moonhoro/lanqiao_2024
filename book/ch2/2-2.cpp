#include <stdio.h>
#include <stdbool.h>

int main()
{
    FILE *infile;
    int a, b, c;
    bool found;

    infile = fopen("data.in", "r");
    if (infile == NULL)
    {
        printf("File not found or cannot be opened.\n");
        return 1;
    }

    while (fscanf(infile, "%d %d %d", &a, &b, &c) == 3)
    {
        found = false;

        for (int i = 10; i < 100; i++)
        {
            if (i % 3 == a && i % 5 == b && i % 7 == c)
            {
                printf("%d\n", i);
                found = true;
                break;
            }
        }

        if (!found)
        {
            printf("No answer\n");
        }
    }

    fclose(infile);

    return 0;
}
