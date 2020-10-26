#include <stdio.h>

/*
#define ad 'a'
#define yas 21

const char *AD = "Ahmet";
Ad değişkenini bu sefer const preprocessor u ile tanımladık

Yukarıdaki yas sabitini define ile tanımlamak yerine şöyle de yapılabilir
enum {
    yas = 21
};

#define yenisatir '\n'
Yukarıdaki define örneklerinde sabitler tanıttık

int main() 
{
    int a,b,toplam;
    printf("====================================\n");
    printf("İlk sayiyi giriniz :");
    scanf("%d",&a);
    printf("====================================\n");
    printf("İkinci sayiyi giriniz :");
    scanf("%d",&b);
    toplam = a + b;
    printf("====================================\n");
    printf("Girdiğiniz sayilarin toplamı : %d\n",toplam);        
    printf("====================================\n");
}

int main()
{
    int kisa,uzun,cevre;
    printf("Kısa kenari giriniz : ");
    scanf("%d",&kisa);
    printf("Uzun kenarı giriniz : ");
    scanf("%d",&uzun);
    cevre = 2*(kisa + uzun);
    printf("Dikdortgenin cevresi : %d\n",cevre);
}
*/

int main() 
{
    printf(*\t*\n*\t*\n*\t*\n*\t*\n*********\n*\t*\n*\t*\n*\t*\n*\t*\n);
    float kilo,vki,boy;
    printf("====================================\n");
    printf("Kilonuzu giriniz : ");
    scanf("%f",&kilo);
    printf("====================================\n");
    printf("Boyunuzu giriniz :");
    scanf("%f",&boy);
    boy = boy/100;
    vki = kilo/(boy*boy);
    printf("====================================\n");
    printf("Vücut kitle indeksiniz : %.1f\n",vki);
    if(vki<=18,49) 
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
        else if(vki>=25 && vki<29.99) 
        {
            printf("====================================\n");
            printf("İdeal kilonun üstündesiniz\n");
            printf("====================================\n");
        }
        else 
        {
            printf("====================================\n");
            printf("İdeal kilonun çok üzerindesiniz\n");
            printf("====================================\n");
        }
}
/*
int main()
{
    int b,c,h;
    float alan;
    printf("Taban uzunluğunu giriniz :");
    scanf("%d",&b);
    printf("Dik kenar uzunluğunu giriniz :");
    scanf("%d",&c);
    alan = b*c / 2;
    printf("Girilen üçgenin alanı : %.0f\n",alan);
    printf("Ahmet'in yasi : %d\n",yas); // define olarak sabitlediğimiz yas constantının değeri burada yazılıyor
    printf("İSMİNİZ ŞUDUR : %s\n",AD);
    printf("İsminiz : %c",ad);
    printf("%c",yenisatir);
}
*/