int       pf_atoi(const char *str, int *i)
{
    int     integer;

    integer = 0;
    while (*str && (*str >= '0' && *str <= '9'))
    {
        integer = (integer * 10) + (*str++ - '0');
        *i += 1;
    }
    return (integer);
}
