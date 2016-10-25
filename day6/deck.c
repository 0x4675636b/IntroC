#include "deck.h"
#include <string.h>

struct deck deck_create(void)
{
	struct deck d;
	for(int s = 0; s < 4; ++s) {
		for(int rank = 2; rank < 15; ++rank) {
			size_t i = s*13 + (rank - 2);
		
			switch(s) {
				case 0:	
					strncpy(d.cards[i].suit, "Clubs", 
											sizeof(d.cards[i].suit));
					break;
				case 1:	
					strncpy(d.cards[i].suit, "Diamonds", 
											sizeof(d.cards[i].suit));
					break;	
				case 2:	
					strncpy(d.cards[i].suit, "Hearts",
											 sizeof(d.cards[i].suit));
					break;
				case 3:	
					strncpy(d.cards[i].suit, "Spades",
									 sizeof(d.cards[i].suit));
					break;
			}

				d.cards[i].rank = rank;
		}
	}
		return d;
}
