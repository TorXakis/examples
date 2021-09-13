#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE  1

int main(int argc, char * argv[])
{
	char whatCameIn[256], extracted[256];
	
	printf("Hello World!\n");
	fflush(stdout);
	while(TRUE) {
		fgets(whatCameIn, 256, stdin);
                sscanf(whatCameIn, "%s", extracted);
		printf("Hello %s!\n", extracted);
		fflush(stdout);
	}
}
