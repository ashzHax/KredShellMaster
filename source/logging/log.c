#include <stdio.h>

typedef enum __LOG_TYPE__{

	DEB,ERR,INF

}LOG_TYPE;

void shlog(LOG_TYPE type, const char* detail, ...)
{
	//int i = sizeof(detail);
	//printf("%d\n%c",i,detail+i-1);
	//void (*ptr) = detail+i;	
	
}

