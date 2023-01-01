#include<stdio.h>

int main(){
    int ales,yabanciDil,agno;
    float puan;
    printf("Ales puaninizi giriniz(0-100):\n>>");
    scanf("%d",&ales);
    printf("Yabanci dil puaninizi giriniz(0-100):\n>>");
    scanf("%d",&yabanciDil);
    printf("Mezuniyet ortalamanizi giriniz(0-100):\n>>");
    scanf("%d",&agno);
    puan = (ales*0.50)+(yabanciDil*0.25)+(agno*0.25);
    printf("Puaniniz:%.2f\n",puan);
    if (puan >= 60){
        printf("Tebrikler! Kazandiniz.");
    }
    else{
        printf("Kazanamadiniz!");
    }
}
