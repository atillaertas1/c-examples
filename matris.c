Bu kod parçası iki matrise 0-100 arasında rastgele değerler atayıp sonrasında
bu iki matrisi toplamakta ve sonucunu 3. bir matrisi atamaktadır. 
Açıkalamar doğrultusunda;
- matris_yazdir fonksiyonu tanımlayınız. 
- main fonksiyonu icerisindeki talimatlar doğrultusunda kodu tamamlayınız. 
*******************************************************************************/

/*
Ad Soyad: Atilla Ertas
Numara: 22181616018
Şube: 2
*/
#include <stdio.h>
#include<time.h>
#define SAT 5
#define SUT 4

/*
Bu fonksiyonu herhangi bir büyüklükteki matrisi ekrana yazdıracak şekilde
kodlayınız. 
*/

void matris_yazdir(short matris[SAT][SUT]){
    int i, j;

    for ( i = 0; i < SAT; i++ )
    {
        for ( j = 0; j < SUT; j++ )
        {
            printf("%3hi\t", matris[i][j]);
        }
        printf("\n");
    }

    printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
}

int main()
{   
    int i,j;
    short matrisA[SAT][SUT], matrisB[SAT][SUT], matrisT[SAT][SUT];
    srand(time(NULL));
    
    // Burada matrisA ve matrisB ye 0 ile 100 arasında rastgele değerler atayan kodu yazınız. 
    
    for ( i = 0; i < SAT; i++)
    {
        for ( j = 0; j < SUT; j++)
        {
            matrisA[i][j] = rand() % 100 + 0;
            matrisB[i][j] = rand() % 100 + 0;
        }
        
    }
    
    // yukarıda tanımlı fonksiyonu kullanarak matrisA ve matrisB yi ekrana yazdırınız. 
    
    matris_yazdir(matrisA);
    matris_yazdir(matrisB);
    
    // Burada iki matrisA ve matrisB yi toplayarak sonucunu matrisT ye atayınız. 
    
    for ( i = 0; i < SAT; i++)
    {
        for ( j = 0; j < SUT; j++)
        {
            matrisT[i][j] = matrisA[i][j] + matrisB[i][j];
        }
    }
     
    // yukarıda tanımlı fonksiyonu kullanarak matrisA ve matrisB yi ekrana yazdırınız. 
    
    matris_yazdir(matrisT);

    return 0;
}
