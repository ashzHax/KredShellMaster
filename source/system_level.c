#include <stdio.h>
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
    system_level_LEVEL = 0;
    system_level_EXP = 0;
	system_level_MAX_EXP = 1000;

    // get file
	// get level
	// get etc whatever
	// start in main, initiation section

}

void system_level_add(size_t cmd_len)
{
	system_level_EXP += (int)cmd_len;   
}

int system_level_get_level() { return system_level_LEVEL; }

int system_level_get_exp() { return system_level_EXP; }

int system_level_get_max_exp() { return system_level_MAX_EXP; }
