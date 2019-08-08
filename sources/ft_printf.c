#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int         ft_printf(const char *format, ...)
{
    va_list args;
    int     len;
    int     i;

    i = 0;
    len = 0;
    va_start(args, format);
    while (format[i] != '\0')
    {
        if (format[i] == '%')
            parse(format, args, &i, &len);
        else
            write(1, &format[i], 1);
        i++;
    }
    va_end(args);
    return (len);
}
