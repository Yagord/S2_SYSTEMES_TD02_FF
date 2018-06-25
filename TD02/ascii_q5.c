# include <stdio.h>

void affcihe_ascii(char deb, char fin)
{
	unsigned char i;
	for (i=deb; i<= fin; i++)
	{
		printf("%x %c	", i, i);
		if (((deb-i)%8) == 0)
		{
			printf("\n");
		}
	}
}