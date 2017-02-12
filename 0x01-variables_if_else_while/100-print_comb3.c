#include <stdio.h>
/**
 * main - print all combinations
 *
 * Description: while, for, if
 * Return: returns 0
 */
int main(void)
{
  int numone = 0, numtwo, i = 1;

  while (i <= 9)
    {
      for (numtwo = i; numtwo <= 9; numtwo++)
	{
	  putchar('0' + numone);
	  putchar('0' + numtwo);
	  if (numone < 9 && i != 9)
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
      i++;
      numone;
    }
  putchar('\n');
  return (0);
}
