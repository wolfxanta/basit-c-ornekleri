#include <stdio.h>
#include <math.h>

// Koordinat formulü : |AB| = KAREKÖK((x1-x2)**2) + ((y1 - y2)**2)) 

int main()
{
    int x1,x2,y1,y2,AB;
    
    printf("İlk sayının x düzlemindeki konumunu giriniz: ");
    scanf("%d",&x1);
    printf("İlk sayinin y düzlemindeki konumunu giriniz: ");
    scanf("%d",&y1);
    printf("İkinci sayının x düzlemindeki konumunu giriniz: ");
    scanf("%d",&x2);
    printf("İkinci sayının y düzlemindeki konumunu giriniz: ");
    scanf("%d",&y2);
    AB = sqrt(pow(x1 - x2,2) + pow(y1 - y2, 2));
    printf("İki nokta arasındaki uzaklık: %d \n", AB);

}