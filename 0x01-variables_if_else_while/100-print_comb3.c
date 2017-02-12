#include <stdio.h>
/**
 * main - print all combinations
 *
 * Description: Use for loops
 * Return: returns 0
 */

int main(void)
{
  int i, j, n;

  i = 0;
  n = 1;

  while (n <= 9)
  {
    for (j = n; j <= 9; j++)
      {
	putchar('0' + i);
	putchar('0' + j);
	if (n < 9 && i != 9)
	  {
	    putchar(',');
	    putchar(' ');
	  }
      }
    n++;
    i++;
  }
  putchar('\n');
  return (0);
}
