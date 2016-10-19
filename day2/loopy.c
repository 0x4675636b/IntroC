#include <stdio.h>

int main(void)
{
    int grades [] = { 75, 86, 99, 100, 67};
    int n = 0;

    while(n < 5)  {
	printf("Grade %d is %d\n", n, grades[n]);
	n++;
    }

    for(int n  = 0; n < 5; n += 1) {
	printf("Grade %d is %d \n", n, grades[n]);
    }
}
