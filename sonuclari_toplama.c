#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    float islem;
    printf(" n degerini giriniz:\n>>");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        islem += ((i*i)+1.23)/(i-0.25);
    }
    printf("Sonuc:%.3f",islem);
}

// ((k*k)+1.23)/(k-0.25)
