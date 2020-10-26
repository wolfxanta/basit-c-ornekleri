#include <stdio.h>

int main() {
      for (int i = 1; i<=10; i++) 
      {
            printf("AhmetG\n");
      }
      for (int i = 1; i <= 10; i++) 
      {
            printf("%d\n",i);
      }
/*
Aşağıdaki döngü kısır döngüdür çünkü döngü 1/2 sonucu ile birlikte 0 sonucunu sonsuza dek döndürecektir
      for(int i = 1; i <=10; i = i / 2) 
      {
            printf("%d\n",i);
      } */
// 100 den 50 ye kadar 3 e tam bölünebilen sayıları ekrana yazdıran kod

      for(int i = 100; i >= 50; i--) {
            if(i % 3 == 0) 
            {
                  printf("%d",i);
            }
      }




}


