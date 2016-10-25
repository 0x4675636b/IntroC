#include <stdio.h>
#include <stdlib.h>



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

struct money input(int dollars, int cents)
{
	printf("Enter the total amount of dollars");

	printf("Enter the total amount of cents");
	

}

struct money add(struct money a, struct money b)
{
	struct money mon;
	mon.dollars = a.dollars + b.dollars;
	if(mon.cents > 99){
		mon.cent -= 100;
		mon.dollars++;
		return mon;
	}
	return mon;


}

struct money print(struct money a)
{
	printf("You have a total of: %d dollars \n", a.dollars);
	printf("You have a total of: %d cents \n", a.cents);
}

int main()
{
	struct money a = init(5,10);
	struct money b,c; 
	b = input();
	C = add(a,b);
	print(c);

}
