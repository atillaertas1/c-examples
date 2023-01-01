#include<stdio.h>


//Klavyeden girilen gün,km ve tip bilgilerine göre kiralanan arabanın ücretini belirleyen C programını yazınız.
//Arazi = gün başına 20 ve km başına 18
//Binek = gün başına 32 ve km başına 22
//station = gün başına 43 ve km başına 28
//Spor = gün başına 51 ve km başına 36
    
    int main(){
    int gun, km, ucret;
    char tur, gecersiz;
    printf("Araba Turleri\n(A veya a)Arazi\n(B veya b)Binek\n(S veya s)Station\n(P veya p)Spor\n");
    printf("------------------------------------------------\n");
    printf("Arabanin turu = \n>>");
    scanf("%c",&tur);
    printf("Arabayi kac gun kullandiniAz = \n>>");
    scanf("%d",&gun);
    printf("Araba ile kac km yol yaptiniz = \n>>");
    scanf("%d",&km);
    printf("------------------------------------------------\n");
    switch (tur)
    {
    case 'A':
    case 'a': ucret = gun * 20 + km * 18;
        break;
    case 'B':
    case 'b': ucret = gun * 32 + km * 22;
        break;
    case 'S':
    case 's': ucret = gun * 43 + km * 28;
        break;
    case 'P':
    case 'p': ucret = gun * 51 + km * 36;
        break;
    default:
        printf("Gecersiz araba kodu girdiniz\n");
        gecersiz = 'X' ;
        break;
    }
    if (gecersiz != 'X')
    printf("Odemeniz gereken tutar : %d TL",ucret);
    else
    printf("HATA!!");
}
