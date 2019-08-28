#include "ft_printf.h"
#include <unistd.h>

int         ft_printf(const char *format, ...)
{
    va_list args;
    int     length;
    int     i;

    i = -1;
    length = 0;
    va_start(args, format);
    while (format[++i])
    {
        if (format[i] == '%')
            length += parsing(format, &i, args) - 1;
        else
            write(1, &format[i], 1);
        length++;
    }
    va_end(args);
    return (length);
}
