int     p_atoi(const char *str, int *i)
{
    int result;

    result = 0;
    while (str[*i] && (str[*i] >= '0' && str[*i] <= '9'))
    {
        result = (result * 10) + (str[*i] - '0');
        *i += 1;
    }
    return (result);
}
