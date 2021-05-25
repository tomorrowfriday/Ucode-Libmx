int mx_mid(int a, int b, int c) 
{
    return ((a <= b && b <= c) || (c <= b && b <= a)) ? b :
            ((b <= c && c <= a) || (a <= c && c <= b)) ? c : a;
}
