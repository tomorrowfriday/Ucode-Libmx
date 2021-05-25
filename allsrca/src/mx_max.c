int mx_max(int a, int b, int c) 
{
    return a >= b && a >= c ? a :
            a <= b && b >= c ? b : c;
}
