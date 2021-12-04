#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
#include<string.h>

int main(int argc, char *argv[]){
	if(argc == 1){
		struct dirent *d;
		DIR *dir = opendir(".");
		if(!dir) {
			printf("Unable to read");
			exit(0);
		}
		while((d = readdir(dir)) != NULL) {
			printf("%s \n", d->d_name);
		}
		printf("DONE\n");
	}
	return 0;
}

