#include <math.h>

unsigned long long binaire(unsigned long long nb)
{
	unsigned long long i;
	unsigned long long somme = 0;
	
	for (i=0;i<=32;i++)
	{
		
			somme+=(nb%2)*pow(10,i);
			nb/=2;
			
			//if(nb>pow(2,i))
			//{
			//	somme+=pow(10,i);
			//	nb-=pow(2,i);
			//}
	}
	 
	return somme;
}