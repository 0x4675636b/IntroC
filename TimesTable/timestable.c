#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int row, column, result;
	char print = '*';
	
	if(argc > 2){
		printf("Usage %s <value> \n", argv[0]);
	} else if(argc == 1 &&strtol(argv[1], NULL, 10) <= 100 && strtol(argv[1], NULL, 10) > 0){

		row = strtol(argv[1], NULL, 10);
		column = strtol(argv[1], NULL, 10);
	
	 } else {

		row = 10;
		column = 10;
	}

	printf("%3c", print);
	// Print first times table row
	for(int count = 1; count <= row; ++count){
		printf("%5d", count);
		if(count == 10){
			printf("\n");
		}
	}
		
	for(int count = 1; count <= row; ++count){
			printf("%3d", count);
		for(int count2 = 1; count2 <= column; ++count2){
				
				result = count * count2; 
				printf("%5d", result);
		
		}
		printf("\n");
	}



}
