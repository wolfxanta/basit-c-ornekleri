#include <stdio.h>

int main()
{
	
	int a,b,ebob = 1,sonuca,sonucb;
	printf("İki tane sayı giriniz: ");
	scanf("%d %d",&a,&b);

	sonuca = a;
	sonucb = b;

	for(int i = 2; i <= 9 ; i++)
	{
		if(a < i && b < i)
			break;
	
		if(a % i == 0 && b % i == 0 )
		{
			a = a / i;
			b = b / i;	
			ebob *= i;
			if(a % i == 0 || b % i == 0) 
				i--;
		}	
		else if(a % i == 0)
		{
			a = a / i;
			if(a % i == 0 || b % i == 0)
				i--;
		}
		
		else if(b % i == 0)
		{

			b = b / i;
			if(a % i == 0 || b % i == 0)
				i--;	
		}
	}	

	printf("%d ve %d sayısının ebobu : %d dir",sonuca,sonucb,ebob);



}

