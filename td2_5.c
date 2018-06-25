#include <stdio.h>

int main(void)
{
	int i;
	
	for (i = 23; i<126; i++) 
	{
		printf("%x %c\t",i,i);
		if (i%8==0)
		{
			printf("\n");
		}
	}
	sleep(100);
	return 0;
}