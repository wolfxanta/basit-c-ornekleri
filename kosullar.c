#include <stdio.h>

int main() 
{
    /*int a = 5, b = 2;
    if (a > b)
    {
        printf("A sayısı B'den büyüktür\n");
    }
    else
    {
        printf("B sayısı A'dan büyüktür\n");
    }

    int sayi;
    printf("Bir sayı giriniz: \n");
    scanf("%d",&sayi)

    if(sayi > 0)
    {
        printf("Pozitif bir sayı girdiniz \n");
    }
    else if (sayi == 0)
    {
        printf("Nötr bir sayı girdiniz \n");
    }
    else 
    {
        printf("Negatif bir sayı girdiniz \n");
    }
    */
    
    
    // Karşılaştırmalı iki sayı

    int s1, s2;
    
    printf("Birinci sayıyı giriniz: ");
    scanf("%d",&s1);
    printf("İkinci sayıyı giriniz: ");
    scanf("%d",&s2);
    
    if (s1 <=0 && s1 >= 0 && s2 <= 0 && s2 >= 0)
    {
        if (s1 > s2)
        {
            printf("%d sayısı %d sayısından büyüktür \n", s1,s2);
        }
        else if (s2 > s1)
        {
            printf("%d sayısı %d sayısından büyüktür \n", s2,s1);
        }
        else 
        {
            printf("%d sayısı %d sayısına eşittir \n", s1,s2);
        }
    }
    else 
    {
        printf("\nHata!.....Sayı girdiğinizden emin olun \a \n");
    }
    
    
    
}