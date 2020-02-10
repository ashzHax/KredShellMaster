#include <stdio.h>
#include <unistd.h>

#include "utility/color_unix.h"

#include "display.c"

int main(int argc, char **argv){
	
	int err = display_init();
	if(err<0){ 
		printf(RED"error"RESET" > init fail, code %d\n",err);	
		return 0;
	}

		
/*
	char out[100];
	getcwd(out,100);
	printf("%s\n",out);

	chdir("/home/ashz/");
	getcwd(out,100);
	printf("\033[0;31m%s\033[0m\n",out);
	
	printf(RED"HI"BLUE "HELLO" RESET);
	
	alarm(3);
	*/
	return 0;
}

