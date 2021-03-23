#include <stdio.h>

int main()
{
    int sayi1 = 1, sayi2 = 1, fibonacci;
    printf("%d\n%d\n",sayi1,sayi2);
    for(int i = 0; i < 10; i++)
    {
        fibonacci = sayi1 + sayi2;
        sayi1 = sayi2;
        sayi2 = fibonacci;
        printf("%d\n",fibonacci);
    }
}

