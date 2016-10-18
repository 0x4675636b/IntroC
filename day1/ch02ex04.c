#include <stdio.h>


int sum_of_squares(int a, int b)
{
  return((a * a) + (b * b));
}



int main(void)
{
   int a = 5, b = 6, c;
   c = sum_of_squares(a, b);
   printf("The sum of squares %d and %d is: %d ", a, b, c);
}

