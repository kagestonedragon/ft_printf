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
int     number_of_signs_l(long n)
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
int     number_of_signs_ll(long long n)
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

