#include <stdio.h>
#include <stdlib.h>

int get_width(int max_val);
int print_table(int column, int row);
int min_max(int row, int column);

int main(int argc, char *argv[])
{
	
	int row = 10, column = 10; //Default for 10 multiplication table
	
	// Check amount of args entered to set correct values
	if(argc > 3) {
		printf("Usage %s <value> \n", argv[0]);
		return 1;
	} else if(argc == 2) {	
		column = strtol(argv[1], NULL, 10);
		row = strtol(argv[1],NULL, 10);
	} else if(argc == 3){
		column = strtol(argv[2], NULL, 10);
		row = strtol(argv[1], NULL, 10);
	}

	//Ensure a value greater than 100 and a value less than 0 cannot be entered
	if((row > 100) ||  (row <= 0)){
		printf("Usage %s <value> \n", argv[0]);
		return 1;		
	} else if ((column > 100) || (column <= 0)){
		printf("Usage %s <value> \n", argv[0]);
		return 1;
	} else if(row > column){
		printf("Usage %s <value< \n", argv[0]);
		return 1;
	}

	//Depending on amount of arguments entered. print the various tables
	if(argc == 1){
		printf("%d", print_table(column, row));
	} else if(argc == 2){
		printf("%d", print_table(column, row));
	} else if (argc == 3){
		printf("%d", min_max(row, column));
	}
}


int print_table(int column, int row)
{	
	//Default table for printing multiplication table

	int result;		
	char print = '*';
	printf("%3c", print);
	// Print *for the first times table row
	for(int count = 1; count <= row; ++count){
		printf("%3d", count);	
		if(count == row){
			printf("\n");
		}
	}		
	// print the inner multiplication table
	for(int count = 1; count <= row; ++count){
			printf("%3d", count);
		for(int count2 = 1; count2 <= column; ++count2){
				result = count * count2; 
				printf("%3d", result);
		
		}
			printf("\n");
	}
	return 0;
}

int min_max(int row,  int column)
{

	int result;
	int max_value = column * column;
	char print = '*';
	//Call get width function to print a variable length based on max number
	int print_width = get_width(max_value) + 1;
		

	printf("%*c", print_width, print);
	// Print first times table row
	for(int counter = row; counter <= column; ++counter){		
		printf("%*d", print_width, counter);
		if(counter == column){
			printf("\n");
		}
	}

	for(int count = row; count <= column; ++count){
			printf("%*d", print_width, count);
		for(int count2 = row; count2 <= column; ++count2){
				result = count * count2; 
				//Print variable width for max count
				printf("%*d", print_width, result);
		}
			printf("\n");
	}
	return 0; 
}

int get_width(int max_val)
{
	/*Idea and Implementation for determining integer length was found on: 
http://stackoverflow.com/questions/3068397/finding-the-length-of-an-integer-in-c
	*/
	int i = 1;
	while(max_val){
		i++;
		max_val /= 10;
		
	} 
	return i;
}
