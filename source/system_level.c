#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DIR_SYSTEM_LEVEL "~/.KSM/level.ksm"

static FILE* system_level;

static int system_LEVEL;
static int system_EXP;

struct __system_USER_DATA__ {

    int LEVEL;
    int EXP;

} system_USER_DATA;

void system_init_level()
{

    system_LEVEL = 0;
    system_EXP = 0;

    system_level = fopen("./profile/level.ksm","w+");
    
    // get file
	// get level
	// get etc whatever
	// start in main, initiation section
}

void system_level_add(size_t cmd_len)
{
    
    
        
}




