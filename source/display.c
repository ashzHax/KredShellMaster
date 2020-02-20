#include <stdio.h>
#include <unistd.h>
#include <string.h>

#include "setting.h"

// dp = display

void dp_init()
{
	printf("[================================================]\n");
	printf("\n");
	printf("    By     : "MAGENTA"ashz"RESET"\n");
	printf("    Reason : "YELLOW"personal custom shell"RESET"\n");
	printf("\n");
	printf("    "BLUE"db   dD"RESET" d8888b. d88888b d8888b.\n");
	printf("    "BLUE"88 ,8P'"RESET" 88  `8D 88'     88  `8D\n");
	printf("    "BLUE"88,8P  "RESET" 88oobY' 88ooooo 88   88\n");
	printf("    "BLUE"88`8b  "RESET" 88`8b   88      88   88\n");
	printf("    "BLUE"88 `88."RESET" 88 `88. 88.     88  .8D\n");
	printf("    "BLUE"YP   YD"RESET" 88   YD Y88888P Y8888D'\n");
	printf("\n");
	printf("    "MAGENTA".d8888."RESET" db   db d88888b db      db     \n");
	printf("    "MAGENTA"88'  YP"RESET" 88   88 88'     88      88     \n");
	printf("    "MAGENTA"`8bo.  "RESET" 88ooo88 88ooooo 88      88     \n");
	printf("    "MAGENTA"  `Y8b."RESET" 88   88 88      88      88     \n");
	printf("    "MAGENTA"db   8D"RESET" 88   88 88.     88booo. 88booo.\n");
	printf("    "MAGENTA"`8888Y'"RESET" YP   YP Y88888P Y88888P Y88888P\n");
	printf("\n");
	printf("    "RED".88b  d88."RESET"  .d8b.  .d8888. d888888b d88888b d8888b. \n");
	printf("    "RED"88'YbdP`88"RESET" d8' `8b 88'  YP    88    88'     88  `8D\n");
	printf("    "RED"88  88  88"RESET" 88ooo88 `8bo.      88    88ooooo 88oobY'\n");
	printf("    "RED"88  88  88"RESET" 88   88   `Y8b.    88    88      88`8b  \n");
	printf("    "RED"88  88  88"RESET" 88   88 db   8D    88    88.     88 `88.\n");
	printf("    "RED"YP  YP  YP"RESET" YP   YP `8888Y'    YP    Y88888P 88   YD\n");
	printf("\n");
	printf("[================================================]\n");
	printf("\n");
	return;
}

void dp_cwd()
{
	printf("%s",getcwd(NULL,MAX_CHAR_LEN_DIR));
	
}
