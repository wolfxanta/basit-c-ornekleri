#include <stdio.h>

// Bölme işlemi kullanmadan iki sayının birbirine bölümünü hesaplayan C kodu
int main()
{
    int bolunen,bolen,i;
    printf("Bölünecek sayıyı giriniz: ");
    scanf("%d",&bolunen);
    printf("Bölen sayıyı giriniz: ");
    scanf("%d",&bolen);
    for(i=1;bolunen != bolen  ;i++)
    {
        bolunen -=bolen;
    }
    printf("İşlem sonucunuz: %d",i);
}
