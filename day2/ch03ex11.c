#include <stdio.h> 

int main(void)
{
	int factorial = 1, i = 10;

	while(i > 0){
		factorial *= i;
		i--;
	}
	printf("Factorial of 10  = %d\n", factorial);

}
