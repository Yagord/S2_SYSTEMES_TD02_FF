# include <stdio.h>

void conversionDécimalBinaireSigne()
{
	char tab[16] = "0000000000000000";
	unsigned short val = -32;
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
	
	if (val < 0)
	{
		for (i = 0; i < 16; i++)
		{
			if tab[i] == '0')
			{
				tab[i] = '1';
			}
			else
			{
				tab[i] = '0';
			}
		}
		if (tab[15] == '0')
		{
			tab[15] = '1';
		}
		else
		{
			if (tab[14] == '0')
			{
				tab[14] = '1';
				tab[15] = '0';
			}
			else
			{
				tab[15] = '1';
			}
		}
	}
	
	for (i = 0; i < 16; i++)
	{
	printf("%c"; tab[i]);
	}
}