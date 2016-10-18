#include <stdio.h>
#include <math.h>
double main()
{
 double p = 200000,i = 7.5, n= 30;
 double j = i / (12 * 100);

 double m = p * (j / (1 - ((1 + j)  - n)));

 
 printf("The total monthly payment is : %f\n", m);
 
 



}
