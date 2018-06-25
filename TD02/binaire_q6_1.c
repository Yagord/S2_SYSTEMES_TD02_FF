# include <stdio.h>

void conversionDécimalBinaireNonSigne()
{
	char tab[16] = "0000000000000000";
	unsigned short val = 32;
	int i;
	
	for (i = 15; i > 0; i--)
	{
		if ((val%2) == 0)
		{
			tab[i] = '0';
		}
		else
		{
			tab[i] = 1;
		}
	}
	
	if (val == 0)
	{
		tab[0] = '1';
	}
	else
	{
		tab[0] = '0';
	}
	
	for (i = 0; i < 16; i++)
	{
	printf("%c"; tab[i]);
	}
}