#include <stdio.h>

//int main yerine void main olarak tanımladık  

void main() 
{
    printf("*\t*\n*\t*\n*\t*\n*\t*\n*********\n*\t*\n*\t*\n*\t*\n*\t*\n");
    printf("======================================\n");

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



    int x,y,toplam,carpim,bolum,bolumKalan;
    
    printf("İlk sayiyi giriniz(Buyuk olan sayi) : ");
    scanf("%d",&x);
    printf("İkinci sayiyi giriniz(Kucuk olan sayi) :");
    scanf("%d",&y);
    
    toplam = x + y;
    carpim = x * y;
    bolum = x / y;
    bolumKalan = x % y;
    
    float bolum = (float)sayi1 / (float)sayi2;   //Küsüratlı işlemlerde format değişikliği

    printf("Girdiğiniz iki sayinin toplamı : %d \n", toplam);
    printf("Girdiğiniz iki sayinin carpimi : %d \n", carpim);
    printf("Girdiğiniz iki sayinin birbirine bolumu : %d \n", bolum);
    printf("Girdiğiniz iki sayinin birbirine bölümünden kalan : %d \n", bolumKalan);
}