#include "main.h"
/**
 *  * print_alphabet - function that prints the alphabet, lowercase
 *   * You can only use _putchar twice in your code
 *    * Return: no thing
*/
void print_alphabet(void)
{
int n;
for (n = 'a'; n <= 'z'; n++)
{
	_putchar(n);
}
_putchar('\n');
}
