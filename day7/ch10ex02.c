#include <stdio.h>
#include <sysexits.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if(argc != 4) {
		fprintf(stderr, "usage: %s <file>\n", argv[0]);
		return EX_USAGE;  	
	}
	
	int ret_code = EX_OK;	

	FILE *fp1 = fopen(argv[2], "r");
	if(!fp1){
		perror("unable to open file 1");
		ret_code = EX_NOINPUT;
		goto leave;
	}
	
	FILE *fp2 = fopen(argv[3], "r");
	if(!fp2){
		perror("unable to open file 2");
		ret_code = EX_NOINPUT;
		goto fp1_cleanup;
	
	}
	int c;
	char a;
	char buf[128];

	if(!strcmp(argv[1], "glue")) {
		c = fgetc(fp1);
		do { 
			a = fgetc(fp1);
			fputc(c, fp2);
						
		} while(a != EOF);
		
		while(fscanf(fp1, "%s", buf) != EOF) {
			printf("%s\n", buf);
		}

	}
cleanup:
	if(fclose(fp2)){
		perror("Unable to close file");
		ret_code = EX_IOERR;
	}

fp1_cleanup:
	if(fclose(fp1)){
		perror("Unable to close file");
		ret_code = EX_IOERR;
	}
leave:
	return ret_code;

}	


