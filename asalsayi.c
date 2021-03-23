#include <stdio.h>

int main()
{
	int a,i;
	printf("Bir sayı giriniz: ");
	scanf("%d",&a);

	for (i = 2; i < a-1; i++)
	{
		if(a % i == 0) 
		{
			printf("Sayı asal değil");
			break;
		}
		else
		{	
			printf("Sayı asaldır");
			break;
		}
	}
}
