#include <stdio.h>
#include <ctype.h>

int main()
{
            printf("-------HESAP MAKİNESİ-------\n");
    char tekrar;
    int sayi1,sayi2,secim,sonuc;
    start:
            printf("1.sayıyı giriniz: ");
            scanf("%d", &sayi1);
            printf("2.sayıyı giriniz: ");
            scanf("%d", &sayi2);

            printf("Yapmak istediğiniz işlemi seçiniz\n");
            printf("---------------\n");
            printf("(1) Toplama\n");
            printf("(2) Çıkarma\n");
            printf("(3) Çarpma\n");
            printf("(4) Bölme\n");
            printf("---------------\n");
            scanf("%d", &secim);

            switch (secim) {
                case 1:
                    printf("Seçtiğiniz işlem toplama,sonuc %d\n", sayi1 + sayi2); goto tekrar_islem;
                case 2:
                    printf("Seçtiğiniz işlem çıkarma,sonuc %d\n", sayi1 - sayi2); goto tekrar_islem;
                case 3:
                    printf("Seçtiğiniz işlem çarpma,sonuc %d\n", sayi1 * sayi2); goto tekrar_islem;
                case 4:
                    printf("Seçtiğiniz işlem bölme,sonuc %d\n", sayi1 / sayi2); goto tekrar_islem;
                default :
                    printf("Sayıyı doğru girdiğinizden emin olunuz."); goto tekrar_islem;
            }
    tekrar_islem:
            puts("Tekrar işlem yapmak istiyormusunuz ? [E] [H]");
            scanf("%s",&tekrar);
            tekrar = toupper(tekrar);
            if (tekrar == 'E')
                    goto start;
            else
            {
                printf("Programdan çıkılıyor....");
                return 0;
            }

}
