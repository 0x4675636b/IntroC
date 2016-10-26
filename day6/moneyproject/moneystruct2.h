#ifndef 9_1_H
  #define 


struct money {
	int dollars;
	int cents;
};

struct money init(int dollars, int cents);
struct money add(struct money a, struct money b);
struct money money_input(void);
void money_print(struct money m);

#endif
