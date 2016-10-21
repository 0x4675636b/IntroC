#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool value_check(int row, int column);
int get_width(int max_val);
void print_table(int column, int row);
void min_max(int row, int column);

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
	
	if(value_check(row, column)){
			printf("Usage %s <value< \n", argv[0]);
			return 1;
	}


//Depending on amount of arguments entered. print the various tables
	if(argc == 1){
		print_table(column, row);
	} else if(argc == 2){
		print_table(column, row);
	} else if (argc == 3){
		min_max(row, column);
	}
}

bool value_check(int row, int column)
{
	//Function checks values entered at the command line to ensure validity
	//Ensure a value greater than 100 and a value less than 0 cannot be entered
	if((row > 100) ||  (row <= 0)){
		return 1;		
	} else if ((column > 100) || (column <= 0)){
		return 1;
	} else if(row > column){
		return 1;
	} 
	return 0;
}
	
void print_table(int column, int row)
{	
	//Default table for printing multiplication table

	int result;		
	char print = '*';
	printf("%3c", print);
	// Print *for the first times table row
	for(int i = 1; i <= row; ++i){
		printf("%3d", i);	
		if(i == row){
			printf("\n");
		}
	}		
	// print the inner multiplication table
	for(int i = 1; i <= row; ++i){
			printf("%3d", i);
		for(int j = 1; j <= column; ++j){
				result = i * j; 
				printf("%3d", result);
		
		}
			printf("\n");
	}

}

void min_max(int row,  int column)
{

	int result;
	int max_value = column * column;
	char print = '*';
	//Call get width function to print a variable length based on max number
	int print_width = get_width(max_value) + 1;
		

	printf("%*c", print_width, print);
	// Print first times table row
	for(int i = row; i <= column; ++i){		
		printf("%*d", print_width, i);
		if(i == column){
			printf("\n");
		}
	}

	for(int i = row; i <= column; ++i){
			printf("%*d", print_width, i);
		for(int j = row; j <= column; ++j){
				result = i * j; 
				//Print variable width for max count
				printf("%*d", print_width, result);
		}
			printf("\n");
	} 
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
