#include <stdio.h>
#include <unistd.h>

#include "setting.h"

#include "utility/color_unix.h"
#include "display.c"
//#include "io_control.c"

char **get_input(){

}

int display_input(){
	


	return 0;
}

int main(int argc, char **argv){

	dp_init();
	/*
	if(err<0){ 
		printf(RED"error"RESET" > init fail, code %d\n",err);	
		return err;
	}
	*/	
	//char buf[MAX_CHAR_LEN_USERNAME];
	while(1){
		dp_cwd();
		get_input();
		printf("\n");
		//getlogin_r(buf,MAX_CHAR_LEN_USERNAME);
		printf("%s\n",getlogin());
		printf("\n");
		break;
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

