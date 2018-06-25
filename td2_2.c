#include <stdio.h>

int main(void)
{
	char caractere1 = 'A';
	char caractere2 = '0';
	char caractere3 = 'a';
	
	printf("A = %c \n",caractere1);
	printf("A = %d\n",caractere1);
	printf("A = %x\n",caractere1);
	
	
	printf("0 = %c \n",caractere2);
	printf("0 = %d\n",caractere2);
	printf("0 = %x\n",caractere2);
	
	
	printf("a = %c \n",caractere3);
	printf("a = %d\n",caractere3);
	printf("a = %x\n",caractere3);
	sleep(5000);
	return 0;
}