#include <stdio.h>

int main()
{
  int n, fact = 1;

  printf("Enter a number to calculate it's factorial : ");
  scanf("%d", &n);

  for (int c = 1; c <= n; c++)
    fact = fact * c;

  printf("Factorial of %d = %d\n", n, fact);

  return 0;
}