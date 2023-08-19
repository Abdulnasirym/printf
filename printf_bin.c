#include "main.h"

/**
 * printf_bin - prints a binary number.
 * @val: arguments.
 * Return: 1.
 */
int printf_bin(va_list val)
{
  int flag = 0;
    int cont = 0, i, bit;

    unsigned int num = va_arg(val, unsigned int);
    unsigned int mask = 1 << 31;

    for (i = 0; i < 32; i++)
    {
        bit = (num & mask) ? 1 : 0;
        
        if (bit == 1)
            flag = 1;
        
        if (flag)
        {
            putchar(bit + '0');
            cont++;
        }
        
        mask >>= 1;
    }

    if (cont == 0)
    {
        putchar('0');
        cont++;
    }

    return (cont);
}
