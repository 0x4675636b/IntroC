#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_greater_than_10(int value);

int main(int argc, char *argv[])
{
	if(argc != 2){
	printf("usage: %s <value>\n", argv[0])
	}
	
	if(is_greater_than_10(strtol(argv[1], NULL, 10)))
		puts("That is greater than 10");
	else {
		puts("That is less than or equal to 10");
	}
}

bool is_greater_than_10(int value)
{
	if(value > 10) {
		return true;
	} else 	
		return false;

}
