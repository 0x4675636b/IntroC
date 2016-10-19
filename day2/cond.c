#include <stdio.h>

int main(void)
{
 int year = 1969;

 // note that we cuddle the braces of the first part of
 // the conditional with any additional parts


 if(year > 2000) {
	printf("You are just out of diapers \n");
    }	else if(year > 1990) {
	printf("I bet you had a extreeeeemee childhood, dude \n");
    } 	else {
	puts("You are an old fart!");
    }


}
