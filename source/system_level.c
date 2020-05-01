#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

#define DIR_SYSTEM_LEVEL "~/.KSM/level.ksm"

static int system_level_LEVEL;
static int system_level_EXP;
static int system_level_MAX_EXP;

struct __system_USER_DATA__ {

    int LEVEL;
    int EXP;

} system_USER_DATA;

void system_level_init()
{
    int KSM_fp = open(DIR_SYSTEM_LEVEL,O_CREAT,0777); 
    mkdir("~/.KSM",0777);
 
    system_level_LEVEL = 0;
    system_level_EXP = 0;
	system_level_MAX_EXP = 1000;

    // get file
	// get level
	// get etc whatever
	// start in main, initiation section

    close(KSM_fp);
}

void system_level_add(size_t cmd_len)
{
    int KSM_fp = open(DIR_SYSTEM_LEVEL,O_RDWR,0777);
    system_level_EXP += (int)cmd_len;   
    close(KSM_fp);
}

int system_level_get_level() { return system_level_LEVEL; }

int system_level_get_exp() { return system_level_EXP; }

int system_level_get_max_exp() { return system_level_MAX_EXP; }
