#include <stdio.h>

int     number_of_signs(int n)
{
    int i;

    i = 0;
    while (n)
    {
        n /= 10;
        i++;
    }
    return (i);
}
