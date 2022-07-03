#include <stdio.h>
void main()
{
  int i, x, j;
  printf("Enter number of rows\n");
  scanf("%d", &i);

  for (j = 1; j <= i; j++)
  {
    for (x = 1; x <= i - j; x++)
      printf(" ");

    for (x = 1; x <= 2 * j - 1; x++)
      printf("*");

    printf("\n");
  }

  for (j = 1; j <= i - 1; j++)
  {
    for (x = 1; x <= j; x++)
      printf(" ");

    for (x = 1; x <= 2 * (i - j) - 1; x++)
      printf("*");

    printf("\n");
  }
}