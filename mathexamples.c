#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// int abs(x)  x tamsayısının mutlak değerini hesaplar
// double fabs(x)  x gerçel sayısının mutlak değerini hesaplar
// dobule sqrt(x)  x sayısının karekökünü hesaplar
// double pow(x,y) xy değerini hesaplar
// double log() pozitif x sayısının doğal logaritmasını hesaplar, ln(x)
// double log10() pozitif x sayısının 10 tabanındaki logaritmasını hesaplar


int main()
{
    printf("-4'ün mutlak değeri: %d \n", abs(-4));   // !!!!! abs <stdlib.h> kütüphanesi ile geliyor math.h ile değil !!!!
    printf("-4.5'in mutlak değeri: %.1f \n", fabs(-4.5));  // Float tiplerinde fabs() olarak kullanıyoruz
    printf("4'ün karekök değeri: %.1f \n", sqrt(8));
    printf("4'ün 5.kuvveti: %.0f \n", pow(4,5));   //Integer olarak format belirleyicisi kullandığımız zaman compile ederken sorun çıkartıyor ve double veya float olarak istiyor
    printf("log 1 değeri: %.1f \n", log(1));
    printf("log 10 tabanında 4'ün değeri: %.1f \n",log10(10));


    // Hipotenüs Bulma Örneği  formül = hipotenus'ün karesi = a kenarının karesi + b kenarının karesidir 

    int a,b,hipotenus;
    
    printf("A kenarının uzunluğunu giriniz: ");
    scanf("%d",&a);
    printf("B kenarının uzunluğunu giriniz: ");
    scanf("%d",&b);
    hipotenus = pow(a,2) + pow(b,2);
    hipotenus = sqrt(hipotenus);
    //printf("Hipotenüs: %.0f \n", sqrt(hipotenus)); Bu şekildede yazılabilir fakat burada veri tipini değiştirmemiz gerekecektir   
    printf("Hipotenüs: %d \n",hipotenus);

}