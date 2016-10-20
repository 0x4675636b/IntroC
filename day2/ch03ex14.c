#include <stdio.h> 

int gov_positions(int age, int years_citizen)
{
//Check Presidential Eligibility
	
 if(age >= 35 && age == years_citizen){
	printf("Eligible for Presidency \n");
	} else {
	printf("Not eligible for Presidency \n");
	}
 if (age >= 30 && years_citizen > 9){
	printf("Eligible for Senate \n");
	} else {
	printf("Not eligible for Senate \n");
	}
 if (age >= 25 && years_citizen > 7){
	printf("Eligible for house \n");
	} else {
	printf("Not eligible for house \n");
	}
	
}
int main(void)
{
	
	int a = gov_positions(57, 14), b = gov_positions(69,69);
	printf("%d", a);
	printf("%d", b);
}

