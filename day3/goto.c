#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 2) {
		printf("Usage: %s <value>\n", argv[0]);
		return 1;
	}
	
	int target = strtol(argv[1], NULL, 10);

	for(int n=2; n < target /2 +1; ++n){
		for(int m = 2; m < target /2 + 1; ++m){
			if(m*n == target) {
				printf("%d * %d = %d\n", m, n, target);
				goto END;
			}
		}
	}
	END:
	target = target;
}
