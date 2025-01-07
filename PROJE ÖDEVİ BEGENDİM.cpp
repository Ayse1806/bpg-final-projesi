#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct atik {
    int pet_sise;
    int cam_sise;
    int kapak;
    int kagit;
    int sivi_yag;
    int pil;
    int metal;
};

float artis_miktari(int sayi) {
    return (sayi - 1) * 0.25;
}

int main() {
    int secim, adet, sayi, litre, gram;
    float toplam_gelir = 0;
    int i, j, tur;
    struct atik x = {0, 0, 0, 0, 0, 0, 0};
    int atilan[8], a = 0;
    
    printf("\t*****ATIK URUNLERININ BIRIM FIYATLARI*****\n\n");
    printf(" Pet Sisenin Birim Fiyati = 3 TL\n ");
    printf("Cam Sisenin Birim Fiyati = 5 TL\n ");
    printf("Kapagin Birim Fiyati = 2 TL\n ");  
    printf("Kagitin Birim Fiyati = 0.7 TL\n ");
    printf("Sivi Yagin Birim Fiyati = 7 TL\n ");
    printf("Pilin Birim Fiyati = 6 TL\n ");
    printf("Metalin Birim Fiyati = 15 TL\n\n\n");
   
    
    while (1) 
	{
        printf("\t*****SECIM YAPINIZ*****\n\n");
        printf(" 1 = Pet Sise \n");
        printf(" 2 = Cam Sise\n");
        printf(" 3 = Kapak\n");
        printf(" 4 = Kagit\n");
        printf(" 5 = Sivi Yag\n");
        printf(" 6 = Pil\n");
        printf(" 7 = Metal\n\n ");
        scanf("%d", &secim);
        atilan[a++] = secim;
        
        switch(secim) 
		{
         case 1:printf("\n Atilacak Pet Sise Adedini Giriniz :  ");
                scanf("%d", &sayi);
                {
                    float pet_sise_gelir = 0; 
                    
                    for (i = 1; i <= sayi; i++) 
					{
                        pet_sise_gelir += 3 + artis_miktari(i);
                    }
                    
                    toplam_gelir += pet_sise_gelir;
                    x.pet_sise += sayi;
                    printf(" Pet Sise Icin Toplam Gelir : %.2f TL\n", pet_sise_gelir);
                    
                }
                break;

            
         case 2:printf("\n Atilacak Cam Sise Adedini Giriniz :  ");
                scanf("%d", &sayi);
                {
                    float cam_sise_gelir = 0; 
                    
                    for (i = 1; i <= sayi; i++) 
					{
                        cam_sise_gelir += 5 + artis_miktari(i);
                    }
                    
                    toplam_gelir += cam_sise_gelir;
                    x.cam_sise += sayi;
                    printf(" Cam Sise Icin Toplam Gelir : %.2f TL\n", cam_sise_gelir);
                
				}
                break;


         case 3:printf("\n Atilacak Kapak Adedini Giriniz :  ");
                scanf("%d", &sayi);
                {
                    float kapak_gelir = 0; 
                    
                    for (i = 1; i <= sayi; i++) 
					{
                        kapak_gelir += 2 + artis_miktari(i);
                    }
                    
                    toplam_gelir += kapak_gelir;
                    x.kapak += sayi;
                    printf(" Kapak Icin Toplam Gelir : %.2f TL\n", kapak_gelir);
                }
                break;

            
         case 4:printf("\n Atilacak Kagit Miktarini Gram Cinsinden Giriniz :  ");
                scanf("%d", &sayi);
                {
                    float kagit_gelir = 0; 
                    
                    for (i = 1; i <= sayi; i++) 
					{
                        kagit_gelir += 0.7 + artis_miktari(i);
                    }
                    
                    toplam_gelir += kagit_gelir;
                    x.kagit += sayi;
                    printf(" Kagit Icin Toplam Gelir : %.2f TL\n", kagit_gelir);
                
				}
                break;

            
         case 5:printf("\n Atilacak Sivi Yag Miktarini Litre Cinsinden Giriniz :  ");
                scanf("%d", &sayi);
                {
                    float sivi_yag_gelir = 0; 
                    
                    for (i = 1; i <= sayi; i++) 
					{
                        sivi_yag_gelir += 7 + artis_miktari(i);
                    }
                    
                    toplam_gelir += sivi_yag_gelir;
                    x.sivi_yag += sayi;
                    printf(" Sivi Yag Icin Toplam Gelir : %.2f TL\n", sivi_yag_gelir);
                
				}
                break;

            
         case 6:printf("\n Atilacak Pil Adedini Giriniz :  ");
                scanf("%d", &sayi);
                {
                    float pil_gelir = 0; 
                    
                    for (i = 1; i <= sayi; i++) 
					{
                        pil_gelir += 6 + artis_miktari(i);
                    }
                    
                    toplam_gelir += pil_gelir;
                    x.pil += sayi;
                    printf(" Pil Icin Toplam Gelir : %.2f TL\n", pil_gelir);
                
				}
                break;

            
         case 7:printf("\n Atilacak Metali Gram Cinsinden Giriniz :  ");
                scanf("%d", &sayi);
                {
                    float metal_gelir = 0; 
                    
                    for (i = 1; i <= sayi; i++) 
					{
                        metal_gelir += 15 + artis_miktari(i);
                    }
                    
                    toplam_gelir += metal_gelir;
                    x.metal += sayi;
                    printf(" Metal Icin Toplam Gelir : %.2f TL\n", metal_gelir);
                
				}
                break;

            
                default :printf("\n Lutfen Gecerli Bir Islem Sayisini Giriniz :(\n ");
                break;
        }


        printf("\n Baska Atmak Istediginiz Geri Donusum Atiginiz Var Mi ? ");
        printf("\n\n 1 = Evet\n ");
        printf("\n 2 = Hayir\n\n ");
        scanf("%d", &tur);
        
        
        if (tur == 2) {
            break; 
        }
    }

    printf("\n *****FATURA BILGISI***** \n\n ");
   
    for (j = 0; j < a; j++) {
        if (atilan[j] == 1) {
            printf("Pet Sise : %d Adet\n", x.pet_sise);    
        }
        if (atilan[j] == 2) {
            printf(" Cam Sise : %d Adet\n", x.cam_sise);    
        }
        if (atilan[j] == 3) { 
            printf(" Kapak : %d Adet\n", x.kapak);    
        }
        if (atilan[j] == 4) {
            printf("Kagit : %d Adet\n", x.kagit);    
        }
        if (atilan[j] == 5) {
            printf(" Sivi Yag : %d Litre\n", x.sivi_yag);    
        }
        if (atilan[j] == 6) {
            printf(" Pil : %d Adet\n", x.pil);    
        }
        if (atilan[j] == 7) {
            printf(" Metal : %d Gram\n", x.metal);    
        }
    }
   
    printf("\n Atiklardan Toplam Kazanciniz : %.2f TL\n", toplam_gelir);
    printf("\n Isleminiz Bitmistir, Iyi Gunler Dileriz :) \n\n");
    
    
    
    return 0;
}
