char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t index;
    size_t s_len;
    size_t sub_len;
    char *substr;

    if (!s) 
        return (0);
    s_len = ft_strlen(s);
    if (s_len <= start)
        return (ft_strdup("")); // return empty
    sub_len = s_len - start; //calcula el tamaño de la substring
    if (sub_len > len) 
        sub_len = len;
    substr = (char *)malloc(sizeof(char) * (sub_len + 1)); // +1 for \0
    if (!substr) 
        return (substr);
    index = 0;
    while (index < sub_len)
        substr[index++] = s[start++];
    substr[index] = '\0';
    return (substr);
}