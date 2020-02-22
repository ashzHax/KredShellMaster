#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "setting.h"

#include "utility/color_unix.h"
#include "logging/log.c"
#include "display.c"

#include <readline/readline.h>
#include <readline/history.h>

#define STOP_CMD 0
#define NORMAL 1
#define OUT_ONLY 2

//#include "io_control.c"

void in_get(char *str)
{
	char *input = readline(" ");
	
	add_history(input);
	strcpy(str,input);
	free(input);
	
	return;
}

int in_chk(char *str) 
{
	if(strcmp(str,"exit")==0) return STOP_CMD;
	else return OUT_ONLY;
}

int main(int argc, char **argv)
{
	char *cmd_str = (char*)malloc(sizeof(char)*MAX_STR_LEN_CMD);
	int ret_val;

	dp_init();
	
	while(1)
	{	
		dp_cwd();
		
		in_get(cmd_str);
	
		ret_val = in_chk(cmd_str);
		
		if(ret_val == STOP_CMD) {
			break;
		}
		else if(ret_val == NORMAL) {

		}
		else if(ret_val == OUT_ONLY) {
			printf("\n    "WHITE"%s\n",cmd_str);
		}
	}	
	
	return 0;
}

