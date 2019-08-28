int     p_strlen(const char *source)
{
    int size;

    size = 0;
    while (source[size])
        size++;
    return (size);
}
