#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 2){
		printf("Usage: %s <file>\n", argv[0]);
		return 1;
	}
	//open the file
	//second argument is a string (not character indicating the mode
	FILE *fp = fopen(argv[1], "r");

	if(!fp) {
	}	

	char buf[128];
	// print lines from the file
	// FILE *stdin
	fgets(buf, sizeof(buf), fp);
	puts(buf);

	// close the file
	fclose(fp);

}
