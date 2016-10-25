#ifndef CARD_H
#define CARD_H

#include <stdbool.h>
#include <stdlib.h>

struct card {

	int rank;
	char suit[19];
};

bool card_format(char output[], size_t sz, struct card c);

#endif
