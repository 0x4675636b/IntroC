#include <stdio.h>
#include <math.h>
double quad(double a, double b, double c);

double quad(double a, double b, double c)
{
 double bpow = pow(b,2);
 double root = sqrt((bpow - (4 * a * c)));
 double answer = (-b + root) / (2 * a);

 return(answer);
}



int main(void)
{
 double a = 3.0,  b = 4.0,  c = 1.0;
 
 double e = quad(a, b, c);

 printf("I hate math %f\n", e);  

}
