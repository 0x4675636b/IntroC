#include <stdio.h> 

int main(void)
{
	int factorial = 0, i = 10;

	while(i < 10){
		factorial *= i;
		i --;
	}
	printf("Factorial of %d  = %d\n", i, factorial);

}
