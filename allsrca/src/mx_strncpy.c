char *mx_strncpy(char *dst, const char *src, int len) 
{
    for (int i = 0; i < len && src[i]; dst[i] = src[i], i++);
    return dst;
}
