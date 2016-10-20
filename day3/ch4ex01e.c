#include <stdio.h>

int main()
{
	int a; 
	#ifdef MIKE
	a = 100;
	printf("MIKE defined: a = %d\n", a);
	#else
	a = 50;
	printf("MIKE not defined: a = %d\n", a);
	#endif 

}
