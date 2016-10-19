#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{	
   if(argc != 2){
	//TODO: should print to error
	printf("Usage: %s <value> \n", argv[0]);
	//TODO: should return error code
	return 1;
   }
	printf("%s\n", argv[1]);

	//Add 5 to value passed as argument 2
	printf("%ld\n", 5+ strtol(argv[1], NULL, 10)); 
	
	char input[5]; // Last character is null byte
	
	fgets(input, sizeof(input), stdin);
	printf("%s\n", input);
}
