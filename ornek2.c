#include <stdio.h>

int main()
{
    int n;
    float sonuc = 0;
    printf("sayiyi giriniz\n");
    scanf("%d",&n);
    for(int k=1;k<=n;k++){
        sonuc = sonuc + (k*k+1.23)/(k-0.25);
    } 
    printf("%f",sonuc);

}