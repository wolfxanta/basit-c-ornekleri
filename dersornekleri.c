#include <stdio.h>

void main()
{
    int final,vize;
    float ds;
    printf("Vize notunuzu giriniz: ");
    scanf("%d",&vize);
    printf("Final notunuzu giriniz: ");
    scanf("%d",&final);
    ds = (vize * 0.4 ) + (final * 0.6);

    if (ds >=90 && ds <=100)
    {
        printf("Dönem sonu notunuz: %.2f\n", ds);
        printf("AA ile dersten geçtiniz..\n");
    }
    else if (ds >=85 && ds <= 89)
    {
        printf("Dönem sonu notunuz: %.2f\n", ds);
        printf("BA ile dersten geçtiniz.\n");
    }
    else if (ds >= 75 && ds <= 84)
    {
        printf("Dönem sonu notunuz: %.2f\n", ds);
        printf("BB ile dersten geçtiniz.\n");
    }
    else if (ds >= 65 && ds <= 74)
    {
        printf("Dönem sonu ortalamanız: %.2f\n", ds);
        printf("CB ile dersten geçtiniz.\n");
    }
    else if (ds >= 60 && ds <= 64)
    {
        printf("Dönem sonu ortalamanız: %.2f\n", ds);
        printf("CC ile dersten geçtiniz.\n");
    }
    else if (ds >= 50 && ds <= 59)
    {
        printf("Dönem sonu notunuz: %.2f\n", ds);
        printf("DC ile dersten geçtiniz.\n");
    }
    else if (ds >= 45 && ds <= 49)
    {
        printf("Dönem sonu notunuz: %.2f\n", ds);
        printf("DD ile dersten geçtiniz\n");
    }
    else if (ds >= 40 && ds <= 44)
    {
        printf("Dönem sonu ortalamanız: %.2f\n", ds);
        printf("FD ile dersten kaldınız.\n");
    }
    else if (ds >= 00 && ds <= 39)
    {
        printf("Dönem sonu ortalamanız: %.2f\n", ds);
        printf("FF ile dersten kaldınız geçmiş olsun bu zekayla üniversite kazanmanız bile garip\n");
    }
    else 
    {
        printf("\n ----Girdi Hatası------ \nNotlarınızı doğru girdiğinizden emin olun.\n");
    }
}


