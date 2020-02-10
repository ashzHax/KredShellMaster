#include <stdio.h>
#include <unistd.h>

#include "utility/color_unix.h"

int main(){
	char out[100];
	getcwd(out,100);
	printf("%s\n",out);

	chdir("/home/ashz/");
	getcwd(out,100);
	printf("\033[0;31m%s\033[0m\n",out);
	
	printf(RED"HI"BLUE "HELLO" RESET);
	
	alarm(3);
	return 0;
}

