#include <stdio.h>

int main()
{
    int sayi;
    printf("sayiyi giriniz\n");
    scanf("%d",&sayi);
    for (int k=0;k<sayi;k++){
         
         for(int i = k;sayi-i>0;i++){
            printf(" ");
         }
         for(int j=1;j<=2*k+1;j++){
            printf("*");
         }
        printf("\n");

    }

}