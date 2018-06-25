#include <stdio.h>
#include "binaire.h"

int main(void)
{
	unsigned long long i=123456;
	unsigned long long bin;
	
	bin = binaire(i);
	
	printf("%llu",bin);
	
	sleep(100);
	return 0;
}