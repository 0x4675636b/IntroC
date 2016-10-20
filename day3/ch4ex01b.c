#include <stdio.h>

#define MIN(A,B) (A) < (B) ? (A) : (B)

int main()
{
	int a = 3, b = -5, c; 

	printf("%d\n", MIN(3,5));
	c = MIN(a * b, b * b);
	printf("%d\n", c);


}
