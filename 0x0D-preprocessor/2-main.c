 lines (10 sloc)  141 Bytes

#include <stdio.h>

/**
 * main - print source file name
 * Return: always 0
 */

int main(void)
{
    putchar ("%s\n", __FILE__);
	return (0);
}
