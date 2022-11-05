#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints odd numbers
 * Description: a beautiful code that prints odd numbers
 * Function void: print odd numbers(n)
 * Return: 0
 */

int main(void)
{
int n = 1;
printf("Odd numbers");
while (n < 20)
{
if (n % 2 != 0)
{
printf("%d", n);
n++
}
}
return (0);
}
