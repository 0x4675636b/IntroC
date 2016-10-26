#include "money.h"
#include <stdlib.h>
#include <stdio.h>


struct money money_init(int dollars, int cents)
{	//Initialize a struct as long as its in the field as declared
	//struct money self = { dollars, cents };

	
	struct money self;
	self.dollars = dollars;
	self.cents = cents;
	return self;
	if(self.cents >= 100){
		self.dollars+= self.cents / 100;
		self.cents %= 100;


	
}
struct money money_add(struct money a, struct money b)
{

	
	struct money self;
	self.dollars = a.dollars + b.dollars;
	self.cents = a.cents + b.cents;
	if(self.cents >= 100){
		self.dollars+= self.cents / 100;
		self.cents %= 100;

	}
	return self; 
}
struct money money_input(void)
{
	struct money;
	int buf[32];

	printf("Dollars amount: ");
	fgets(buf, sizeof(buf), stdin);
	self.dollars = strtol(buf, NULL, 10);
		
	
	printf("cents amount: ");
	fgets(buf, sizeof(buf), stdin);
	self.cents = strtol(buf, NULL, 10);

	return money; 
}


void money_print(struct money m)
{
	prinf("$%d.%02d", m.dollars, m.cents);

}
