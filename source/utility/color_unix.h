// C
/*
	by : ashz
	reason : text color formatting
	
	reference site : https://stackoverflow.com/questions/3585846/color-text-in-terminal-applications-in-unix
	reference site : http://web.theurbanpenguin.com/adding-color-to-your-output-from-c

	example : printf(RED"RED I AM "BLUE"BLUE I AM "RESET);
*/

#define clear() printf("\033[H\033[J") 

#define DARK_RED     "\x1B[31m"
#define DARK_GREEN   "\x1B[32m"
#define DARK_YELLOW  "\x1B[33m"
#define DARK_BLUE    "\x1B[34m"
#define DARK_MAGENTA "\x1B[35m"
#define DARK_CYAN    "\x1B[36m"

#define RED          "\x1B[0;31m"
#define GREEN        "\x1B[0;32m"
#define YELLOW       "\x1B[0;33m" 
#define BLUE         "\x1B[0;34m"
#define MAGENTA      "\x1B[0;35m"
#define CYAN         "\x1B[0;36m"
/*
#define BOLD_RED     "\x1B[1;31m"
#define BOLD_GREEN   "\x1B[1;32m"
#define BOLD_YELLOW  "\x1B[1;33m" 
#define BOLD_BLUE    "\x1B[1;34m"
#define BOLD_MAGENTA "\x1B[1;35m"
#define BOLD_CYAN    "\x1B[1;36m"
#define BOLD_WHITE   "\x1B[1;37m"
*/

#define BOLD_BLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLD_RED     "\033[1m\033[31m"      /* Bold Red */
#define BOLD_GREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLD_YELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLD_BLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLD_MAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLD_CYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLD_WHITE   "\033[1m\033[37m"      /* Bold White */

#define WHITE   "\x1B[37m"
#define RESET   "\x1B[0m"

