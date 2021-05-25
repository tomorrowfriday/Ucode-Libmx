#include "libmx.h"

double mx_pow(double n, unsigned int pow) 
{
    return pow == 0 ? 1 : n * mx_pow(n, pow - 1);
}
