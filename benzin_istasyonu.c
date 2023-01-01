#include<stdio.h>

/*Bir benzin istasyonu gün sonunda 4 adet araba markasından hangisinin gün içinde daha çok geldigini
ve hangi markaya daha çok benzin satışı yapıldıgını bilgisayar uygulama programı kullanarak bulmak
istenmektedir.
Buna göre görevli elindeki avuçiçi bilgisayara gelen arabanın markasını belirten kodu ve 
benzin satış tutarını girmektedir.Bu işlem gün sonunda görevlinin araç kodu yerine 111 
girmesi ile sonlanmalı ve girdi hata kontrolü yapılmalıdır.Araçların marka kodu;
RENAULT = 1
MAZDA = 2
HONDA = 3
FORD = 4
*/


int main(){
    int marka, r=0, m=0, h=0, f=0, en_buyuk=0;                                  //r = renault  , m = mazda , h = honda , f = ford
    float tutar, r_tutar=0, m_tutar=0, h_tutar=0, f_tutar=0, en_buyuk_tutar=0;    // r_tutar = renault benzin , m_tutar = mazda benzin
                                                                                //  h_tutar = honda benzin   , f_tutar = ford benzin
    do
    {
        printf("Marka, tutari giriniz:\n");
        scanf("%d%f",&marka,&tutar);

        switch(marka)
        {
        case 1:
            r++;
            r_tutar = r_tutar + tutar;
            if(r >= en_buyuk){
                en_buyuk = 0;
                en_buyuk = r;
            }
            if(r_tutar > en_buyuk_tutar){
                en_buyuk_tutar = 0;
                en_buyuk_tutar = r_tutar;
            }   
            break;
        case 2:
            m++;
            m_tutar = m_tutar + tutar;
            if(m >= en_buyuk){
                en_buyuk = 0;
                en_buyuk = m;
            }
            if(m_tutar > en_buyuk_tutar){
                en_buyuk_tutar = 0;
                en_buyuk_tutar = m_tutar;
            }  
            break;
        case 3:
            h++;
            h_tutar = h_tutar + tutar;
            if(h >= en_buyuk){
                en_buyuk = 0;
                en_buyuk = h;
            }
            if(h_tutar > en_buyuk_tutar){
                en_buyuk_tutar = 0;
                en_buyuk_tutar = h_tutar;
            }  
            break;
        case 4:
            f++;
            f_tutar = f_tutar + tutar;
            if(f >= en_buyuk){
            en_buyuk = 0;
            en_buyuk = f;
            }
            if(f_tutar > en_buyuk_tutar){
                en_buyuk_tutar = 0;
                en_buyuk_tutar = f_tutar;
            }  
            break;
        default:
            break;
        }
    } while (marka!=111);
    
    if(r==m && m==h && h==f){
        printf("Tum arac markalari esit sayida gelmistir (%d)\n",en_buyuk);
    }
    else{
    if (en_buyuk == r)
        printf("\nEn cok gelen arac markasi: Renault(%d)\n",en_buyuk);
    else if(en_buyuk == m)
        printf("\nEn cok gelen arac markasi: Mazda(%d)\n",en_buyuk);
    else if(en_buyuk == h)
        printf("\nEn cok gelen arac markasi: Honda(%d)\n",en_buyuk);
    else if (en_buyuk == f)
        printf("\nEn cok gelen arac markasi: Ford(%d)\n",en_buyuk);
    }

    if (r_tutar == m_tutar && m_tutar == h_tutar && h_tutar == f_tutar){
        printf("Tum araclar esit miktarda benzin almistir.(%.2f)",en_buyuk_tutar);        
    }
    else{
    if (en_buyuk_tutar == r_tutar)
        printf("En cok satis yapilan marka Renault(%.2f TL)",en_buyuk_tutar);
    else if(en_buyuk_tutar == m_tutar)
        printf("En cok satis yapilan marka Mazda(%.2f TL)",en_buyuk_tutar);
    else if(en_buyuk_tutar == h_tutar)
        printf("En cok satis yapilan marka Honda(%.2f TL)",en_buyuk_tutar);
    else if(en_buyuk_tutar == f_tutar)
        printf("En cok satis yapilan marka Ford(%.2f TL)",en_buyuk_tutar);
    }
}
