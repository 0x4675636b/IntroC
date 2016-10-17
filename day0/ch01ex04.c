#include <stdio.h>

int main()
{
   int a = 5, b =10;
   double x = 25.5, y = 20;
   int sum = a + b;  
   int product = a * b;
   double sumd = x + y;
   double productd = a * b;
 
   printf("The sum of %d and %d is: %d \n", a, b, sum);
   printf("The product of %d and %d is: %d \n ", a, b, product);
   printf("The sum of %f and %f is: %f \n", x, y, sumd);
   printf("The product of %f and %f is: %f \n ", x, y, productd);

   
}
