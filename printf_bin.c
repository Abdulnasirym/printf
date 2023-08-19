#include "main.h"

/**
 * printf_bin - prints a binary number.
 * @val: arguments.
 * Return: 1.
 */
int printf_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int i, bit;

	unsigned int num = va_arg(val, unsigned int);

	for (i = 32; i >= 0; i--)
	{
		bit = (num >> i) & 1;

		if (bit == 1)
		flag = 1;

		if (flag)
		{
			putchar(bit + '0');
			cont++;
		}
	}

	if (cont == 0)
	{
		putchar('0');
		cont++;
	}

	return (cont);
}
