#include <stdio.h>
#include "card.h"
#include "deck.h"

int main(void)
{
	struct deck pile = deck_create();
	char buf[18];
	
	for(int n = 0; n < 52; ++n){
		card_format(buf, sizeof(buf), pile.cards[n]);
	
		puts(buf);
	}
}
