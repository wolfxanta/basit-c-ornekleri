#include <stdio.h>

int main()
{

int x,y,toplam,fark,carpim,bolum,bolumKalan;
    
    printf("İlk sayiyi giriniz: ");
    scanf("%d",&x);
    printf("İkinci sayiyi giriniz:");
    scanf("%d",&y);
    
    toplam = x + y;
    fark = x - y;
    carpim = x * y;
    bolum = x / y;
    bolumKalan = x % y;
    
    float bolum = (float)sayi1 / (float)sayi2;   //Küsüratlı işlemlerde format değişikliği

    printf("Girdiğiniz iki sayinin toplamı : %d \n", toplam);
    printf("Girdiğiniz iki sayının farkı : %d \n", fark);
    printf("Girdiğiniz iki sayinin carpimi : %d \n", carpim);
    printf("Girdiğiniz iki sayinin birbirine bolumu : %d \n", bolum);
    printf("Girdiğiniz iki sayinin birbirine bölümünden kalan : %d \n", bolumKalan);

}
