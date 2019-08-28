#include "ft_printf.h"
#include <stdlib.h>

char        *new_string(const char *source)
{
    char    *result;
    int     size;

    size = p_strlen(source);
    result = (char *)malloc(sizeof(char) * (size + 1));
    result[size] = '\0';
    while (size--)
        result[size] = source[size];
    return (result);
}
