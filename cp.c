#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	if(argc!=3) {
		printf("ERROR, not enough arguments");
		exit(0);
	}
	FILE *fp1 = fopen(argv[1], "r");
	FILE *fp2 = fopen(argv[2], "w");
	//if(!fp1 || !fp2) printf("ERROR, files do not exist");
	
	char c;
	while((c=fgetc(fp1))!=EOF) fputc(c, fp2);
	
	fclose(fp1);
	fclose(fp2);
}

