// Created by Ahmet A.Gültekin on 11/13/20.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int sayi;

    for(int i = 1; i > 0; i++)
    {
        srand(time(NULL));
        sayi = 1+rand() % 100;  // rand() stdlib.h kütüphanesiyle gelen rastgele sayı üretme fonksiyonu
        if (sayi == 50)
        {
            printf("%d. turda bulundu\n",i);
            break;
        }
    }
    printf("%d",sayi);
}

