#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char* argv[]){

	char line[256];

	int c;

	
	while(( c = getchar()) != EOF ){	
		if(isdigit(c)){	
			continue;
		}
		putchar(c);	
		
	}
}
