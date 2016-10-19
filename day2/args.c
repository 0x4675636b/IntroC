#include <stdio.h>


 
int main(int argc, char *argv[])
{
	printf("%d\n", argc);

	printf("%s\n", argv[0]);
	

	for(int n = 0; n< argc; ++n){
	   printf("%d: %s\n", n, argv[n]);
	}

}
