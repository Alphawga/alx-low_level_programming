#include <stdio.h>

/**
 *  main - Print alphabet
 *
 *   Return: 0(sucess)
 */

char main(void)
{
        char c;

        for (c = 'a'; c <= 'z'; ++c)
        putchar("%c", c);

        putchar("\n");

        return (0);

}
