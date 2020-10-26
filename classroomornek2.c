#include <stdio.h>

int main() 
{
    float boy;
    int kilo;
    double vki;

    printf("Kilonuzu giriniz : ");
    scanf("%d",&kilo);
    printf("====================================\n");
    printf("Boyunuzu giriniz :");
    scanf("%f",&boy);

    boy = boy/100;
    vki = kilo / (boy*boy);
    
    printf("====================================\n");
    printf("Vücut kitle indeksiniz : %.2f\n",vki);

    if(vki<=18.49) 
    {
        printf("====================================\n");
        printf("İdeal kilonunun altındasınız\n");
        printf("====================================\n");
    }

     else if(vki>18.5 && vki<24.9) 
     { 
         printf("====================================\n");
         printf("İdeal kilodasınız\n");
         printf("====================================\n");
     }

     else if(vki>=25.00 && vki<29.99) 
     {
         printf("====================================\n");
         printf("İdeal kilonun üstündesiniz\n");
         printf("====================================\n");
     }

    else 
    {
        printf("====================================\n");
        printf("Doktora görünmelisiniz.\n");
        printf("====================================\n");
    }

    
}
