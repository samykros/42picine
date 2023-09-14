#include <stdio.h>

void abc();

int main()
{
    abc();
    return 0;
}

void abc()
{
    int i;
    int j;

    i  = 0;
    while (i < 26)
    {
        j = 0;
        while (j <= i)
        {
            printf("%c", 'a' + i);
            j++;
        }
        printf("\n");
        i++;
    }
}

