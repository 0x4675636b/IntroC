#include <stdio.h>
#include <sysexits.h>


int main(int argc, char *argv[])
{
	if(argc != 3) {
		fprintf(stderr, "usage: %s <file>\n", argv[0]);
		return EX_USAGE;  	
	}
	
	int ret_code = EX_OK;	

	FILE *fp1 = fopen(argv[1], "r");
	if(!fp1){
		perror("unable to open file 1");
		ret_code = EX_NOINPUT;
		goto leave;
	}
	
	FILE *fp2 = fopen(argv[2], "r");
	if(!fp2){
		perror("unable to open file 2");
		ret_code = EX_NOINPUT;
		goto fp1_cleanup;
	}


	int c = getc(fp1);
	int d = getc(fp2);
	while ((c != EOF) && (d != EOF) && (c == d)) {
		c = getc(fp1);
		d = getc(fp2);
	
	}
	if(c == d){
		printf("files are identical \n");
	} else if(c != d) {
		printf("Files are not identical \n");
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


