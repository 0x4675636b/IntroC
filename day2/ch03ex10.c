#include <stdio.h>

int main(void)
{

	int i;

	for(i = -4; i <= 4; i++)
	{
		if(i < 0 && i % 2 == 0)
		{
		 printf("%d is negative and even  \n", i);	
		}
		else if(i < 0 && i % 2 != 0)
		{
		 printf("%d is negative and odd \n", i);
		}
		else if(i > 0 && i % 2 == 0)
		{
		 printf("%d is positive and even \n", i);
		}
		else if(i > 0 && i % 2 != 0)
		{
		printf("%d is positive and odd \n", i); 
		}
		else if(i == 0)
		{
		printf("%d is even  \n", i);
		}
	
	} 
}


