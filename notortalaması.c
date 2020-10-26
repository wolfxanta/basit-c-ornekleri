#include <stdio.h>

// Bu kod örneğinde geçme notu 45 olarak hesaplanmıştır

int main()
{
    int final,vize;
    float ds;   // Dönem sonu ortalaması değişkeni
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
    else if (ds >= 85)
    {
        printf("Dönem sonu notunuz: %.2f\n", ds);
        printf("BA ile dersten geçtiniz.\n");
    }
    else if (ds >= 75)
    {
        printf("Dönem sonu notunuz: %.2f\n", ds);
        printf("BB ile dersten geçtiniz.\n");
    }
    else if (ds >= 65)
    {
        printf("Dönem sonu ortalamanız: %.2f\n", ds);
        printf("CB ile dersten geçtiniz.\n");
    }
    else if (ds >= 60)
    {
        printf("Dönem sonu ortalamanız: %.2f\n", ds);
        printf("CC ile dersten geçtiniz.\n");
    }
    else if (ds >= 50)
    {
        printf("Dönem sonu notunuz: %.2f\n", ds);
        printf("DC ile dersten geçtiniz.\n");
    }
    else if (ds >= 45)
    {
        printf("Dönem sonu notunuz: %.2f\n", ds);
        printf("DD ile dersten geçtiniz\n");
    }
    else if (ds >= 40)
    {
        printf("Dönem sonu ortalamanız: %.2f\n", ds);
        printf("FD ile dersten kaldınız.\n");
    }
    else if (ds >= 00)
    {
        printf("Dönem sonu ortalamanız: %.2f\n", ds);
        printf("FF ile dersten kaldınız\n");
    }
    else 
    {
        printf("\n ----Girdi Hatası------ \nNotlarınızı doğru girdiğinizden emin olun.\n");
    }
}


