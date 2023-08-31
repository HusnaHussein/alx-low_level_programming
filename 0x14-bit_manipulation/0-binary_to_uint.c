#include "main.h"
/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: binary
*
* Return: Unsigned Integer
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, index = 0;

	if (!b)
		return (0);
	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
		decimal <<= 1;

		if (b[index] & 1)
		{
			decimal += 1;
		}
		index += 1;
	}
	return (decimal);
}


