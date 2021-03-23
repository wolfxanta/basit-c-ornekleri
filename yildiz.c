#include <stdio.h>

int main()
{
    int bosluk = 4;
    for(int i = 1; i >= 0; i--)
    {
        for(int k = 1; k >= 0; k--)
        {
          printf("*");
          for(int j = bosluk; j >= 1; j = j/2)
          {
              printf(" ");
          }

        }
        printf("\n");
        printf(" ");
        bosluk -= 3;
    }
    printf(" *");
    printf("\n");

    bosluk = 1;
    printf(" ");
    for(int i = 1; i >= 0; i--)
    {
        for(int k = 1; k >= 0; k--)
        {
            printf("*");
            for(int j = bosluk; j > 0 ; j--)
            {
                printf(" ");
            }
            bosluk = 3;
        }
        printf("\n");

    }
}
