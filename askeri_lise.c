#include<stdio.h>

int main(){
    char yas;
    float kilo,boy,vki;
    printf("Lutfen yasinizi giriniz:\n>>");
    scanf("%d",&yas);
    printf("Lutfen kilonuzu giriniz:\n>>");
    scanf("%f",&kilo);
    printf("Lutfen boyunuzu metre cinsinden giriniz:\n>>");
    scanf("%f",&boy);
    vki = (kilo) / (boy*boy);
    printf("Yas:%d\n",yas);
    printf("Kilo:%.2f\n",kilo);
    printf("Boy:%.2f\n",boy);
    printf("VKI:%.2f\n",vki);
    if (yas >= 13 && yas <= 17 && vki >= 18.50 && vki <= 24.99){
        printf(">>Tebrikler kazandiniz.");
    }
    else{
        printf(">>Elendiniz.");
    }
}
