#include <stdio.h>
#include <unistd.h>

#include "utility/color_unix.h"

#include "display.c"
#include "io_controil.c"

char **get_input(){

}

int display_input(){
	


	return 0;
}

int main(int argc, char **argv){

	int err = display_init();
	if(err<0){ 
		printf(RED"error"RESET" > init fail, code %d\n",err);	
		return err;
	}
		
	while(1){
		err = display_input();
		if(err<0){
			printf(RED"error"RESET" > display fail, code %d\n",err);	
			return err;
		}
		
		get_input();
	
		
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

