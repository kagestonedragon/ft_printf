void    skip_numbers(const char *format, int *i)
{
    while (format[*i] >= '0' && format[*i] <= '9')
        *i += 1;
}
