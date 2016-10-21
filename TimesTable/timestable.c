#include <stdio.h>
#include <stdlib.h>


int get_width(int max_val);
int print_table(int column, int row);
int min_max(int min, int max);

int main(int argc, char *argv[])
{
	int row = 10, column = 10, min, max;
	

	if(argc > 3) {
		printf("Usage %s <value> \n", argv[0]);
		return 1;
	} else if(argc == 2) {	
		column = strtol(argv[1], NULL, 10);
		row = strtol(argv[1],NULL, 10);
	} else if(argc == 3){
		max = strtol(argv[2], NULL, 10);
		min = strtol(argv[1], NULL, 10);
	}

	if((row > 100) ||  (row <= 0)){
		printf("Usage %s <value> \n", argv[0]);
		return 1;		
	} else if ((column > 100) || (column <= 0)){
		printf("Usage %s <value> \n", argv[0]);
		return 1;
	} 
	if(max > 100 || max < min){
		printf("Usage %s <value> \n", argv[0]);
		return 1;
	}



	
	if(argc == 1){
		printf("%d", print_table(column, row));
	} else if(argc == 2){
		printf("%d", print_table(column, row));
	} else if (argc == 3) {
		printf("%d", min_max(min, max));
	}
}	
int print_table(int column, int row)
{	
	int result;		
	char print = '*';
	
	printf("%4c", print);
	// Print first times table row
	for(int count = 1; count <= row; ++count){
		printf("%4d", count);
		if(count == row){
			printf("\n");
			}
		}
		
	for(int count = 1; count <= row; ++count){
			printf("%4d", count);
		for(int count2 = 1; count2 <= column; ++count2){
				result = count * count2; 
				printf("%4d", result);
		
			}
			printf("\n");
		}
	return 0;
}
int min_max(int min, int max)
{
	int result;
	int max_value = max * max;
	char print = '*';
	int print_width = get_width(max_value) + 1;
		

	printf("%*c", print_width, print);
	// Print first times table row
	for(int counter = min; counter <= max; ++counter){		
		printf("%*d", print_width, counter);
		if(counter == max){
			printf("\n");
			}
		}
	for(int count = min; count <= max; ++count){
			printf("%*d", print_width, count);
		for(int count2 = min; count2 <= max; ++count2){
				result = count * count2; 
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
		
	} return i;
}
