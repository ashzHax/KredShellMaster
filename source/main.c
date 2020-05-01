#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

#include "setting.h"

#include "utility/color_unix.h"
#include "logging/log.c"
#include "system_level.c"
#include "display.c"

#include <readline/readline.h>
#include <readline/history.h>

#define STOP_CMD 0
#define NORMAL 1
#define OUT_ONLY 2
#define CHANGE_DIR 3

//#include "io_control.c"

/*
https://stackoverflow.com/questions/4217037/catch-ctrl-c-in-c/4217052*
 *
 * */

void  INThandler(int sig)
{
    char  c;

    signal(sig, SIG_IGN);
    printf("OUCH, did you hit Ctrl-C?\n"
            "Do you really want to quit? [y/n] ");
    c = getchar();
    if (c == 'y' || c == 'Y')
        exit(0);
    else
        signal(SIGINT, INThandler);
    getchar(); // Get new line character
}

void in_get(char *str)
{
    //signal(SIGINT, INThandler);    
    char *input = readline(" ");
	
	add_history(input);
	system_level_add(strlen(input));
    strcpy(str,input);
	free(input);
	
	return;
}

int in_chk(char *str) 
{
	if(strcmp(str,"exit")==0) return STOP_CMD;
    else if(strcmp(str,"cd")==0) {
        // only check if the START of the string is CD
        return CHANGE_DIR;
    }
#if COMMAND_DEBUG
    else return OUT_ONLY;
#else   
    else return NORMAL;
#endif
}

void end_program()
{
	//deinit
	exit(0);
}

int main(int argc, char **argv)
{
	char *cmd_str = (char*)malloc(sizeof(char)*MAX_STR_LEN_CMD);
	int ret_val;

	//dp_init();
    system_level_init();

    clear();

	while(1)
	{	
        dp_cwd();
		
		in_get(cmd_str);
	
		ret_val = in_chk(cmd_str);
	
		switch(ret_val)
		{
			case STOP_CMD: 
			{
				end_program();
			}		
			case NORMAL:
			{
            	system(cmd_str);
				break;
			}
			case OUT_ONLY:
			{
				printf("\n    "WHITE"%s\n",cmd_str);
				break;
			}
            case CHANGE_DIR:
            {
                chdir(cmd_str+3);
                break;
            }
		}
	}	
	
	return 0;
}

