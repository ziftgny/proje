#include <stdio.h>

int main()
{
    int sayi;
    printf("sayiyi giriniz\n");
    scanf("%d",&sayi);
    for (int k=1;k<=sayi;k++){
        
         for(int j=1;j<=k;j++){
            printf("#");
         }
        printf("\n");

    }

}