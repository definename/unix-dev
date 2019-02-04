#include "util.h"
#include "stdio.h"

void Print()
{
	#ifdef HELLO
		printf("Hello, World.\n");
	#else
		printf("Good, World.\n");
	#endif

}