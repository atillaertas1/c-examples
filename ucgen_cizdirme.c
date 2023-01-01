#include<stdio.h>
#include<stdlib.h>

int main(){
    int satir;
    printf("Satir sayisi giriniz:\n");
    scanf("%d",&satir);
    for (int i = 1; i <= satir; i++){
       for (int j = 1; j <= i ;j++){
        printf("#");
       }
        printf("\n");
    }
}
