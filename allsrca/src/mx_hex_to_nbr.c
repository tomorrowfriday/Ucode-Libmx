#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) 
{
	unsigned long num = 0;

	if (hex == NULL)
		return num;

	for (int i = 0; i < mx_strlen(hex); i++) 
	{
		int drop = hex[i] >= '0' && hex[i] <= '9' ? 48 : 
				hex[i] >= 'A' && hex[i] <= 'F' ? 55 : 87;
		num = num * 16 + (hex[i] - drop);
	}
	return num;
}
