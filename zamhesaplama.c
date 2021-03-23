#include <stdio.h>

int main()
{
  int cocuk,maas;
  printf("Maasınızı giriniz: ");
  scanf("%d",&maas);
  printf("Kaç çocuğunuz var: ");
  scanf("%d",&cocuk);
  if (cocuk == 1)
  {
    maas = maas + (maas * 5 / 100);
    printf("Yeni maaşınız: %d\n",maas);
  }
  else if (cocuk == 2)
  {
    maas = maas + (maas * 10 / 100);
    printf("Yeni maaşınız: %d\n",maas);
  }
  else if (cocuk >= 3)
  {
    maas = maas + (maas * 15 / 100);
    printf("Yeni maaşınız: %d\n",maas);
  }
  else if (cocuk == 0)
  {
    printf("Zam alamadınız\n");
  }
  else
    printf("Çocuk sayısını doğru girdiğinizden emin olun\n");
}
