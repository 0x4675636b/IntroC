#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct money init(int dollars, int cents);
struct money add(struct money a, struct money b);
void  input(struct money *w);
void  print(struct money a);

struct money
{
	int dollars;
	int cents;
};


struct money init(int dollars, int cents)
{
	struct money m; 
	m.dollars = dollars;
	m.cents = cents;
	return m;
}

void input(struct money *w)
{
	
	printf("Enter the total amount of dollars");
	scanf("%d, %d", &w->dollars, &w->cents);	

	
}

struct money add(struct money a, struct money b)
{
	struct money mon;
	mon.dollars = a.dollars + b.dollars;
	while(mon.cents > 99){
		mon.cents-= 100;
		mon.dollars++;
		return mon;
	}
	return mon;


}

void print(struct money a)
{
	printf("You have a total of: %d dollars \n", a.dollars);
	printf("You have a total of: %d cents \n", a.cents);
}

int main()
{
	struct money a = init(5,10);
	struct money b,c; 
	input(&b);
	c = add(a,b);
	print(c);

}
