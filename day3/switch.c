#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 2){
		printf("Usage: %s <value>\n", argv[0]);
		return 1;  
	}
	int month = strtol(argv[1], NULL, 10);
	int days = days_in_month(month);
	
	printf("There are %d days in that month %d\n", days, month);
}

int days_in_month(int month)
{
	int days = 0;	
	switch(month){
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default:
			days = 31;	
	}
	return days;
}
