#include <stdio.h>

/**
 *  main - Print alphabet
 *
 *   Return: 0(sucess)
 */

int main(void)
{
        char c;

        for (c = 'a'; c <= 'z'; ++c)
        putchar("%c", c);

        putchar("\n");

        return (0);

}
