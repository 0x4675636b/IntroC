#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, square, cube;

	for(a = 20; a < 60; a++){
		if(a % 2 == 0){
		 	square = pow(a, 2);
		 	cube = pow(a, 3);
			printf("%5d, %5d, %5d \n", a, square, cube);
		}
	}

}


