#include <stdio.h>
#include <stdlib.h>

int print_table(int column, int row);

int main(int argc, char *argv[])
{
	int row = 10, column = 10;
	

	if(argc > 2) {
		printf("Usage %s <value> \n", argv[0]);
		return 1;
	} else if(argc == 2) {	
		column = strtol(argv[1], NULL, 10);
		row = strtol(argv[1],NULL, 10);
	}

	if((row > 100) ||  (row < 0)){
		printf("Usage %s <value> \n", argv[0]);
		return 1;		
	} else if ((column > 100) || (column < 0)){
		printf("Usage %s <value \n", argv[0]);
		return 1;
	}
	
	printf("%d", print_table(column, row));
}	
int print_table(int column, int row)
{	
	int result;		
	char print = '*';
	
	printf("%3c", print);
	// Print first times table row
	for(int count = 1; count <= row; ++count){
		printf("%5d", count);
		if(count == row){
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
	return 0;
}
