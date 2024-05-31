//
//  main.c
//  fonksiyon ile asal mı değil mi
//
//  Created by BUĞRA DEMİRCAN on 28.12.2021.
//

#include <stdio.h>

int asal_mi(int sayi)
{
    int i;
    
    for (i=2; i<sayi; i++)
    {
        if (sayi %i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main(int argc, const char * argv[]) {
    // insert code here...
   
    int n;
   
    printf("Bir sayi giriniz: ");
    
    scanf("%d",&n);
    
    printf("\n");
    
    if (asal_mi(n) == 0)
    {
        printf("Girdiginiz sayi asal sayi degildir..");
    
    }
    else {
        printf("Girdiginiz sayi asal sayidir..");
    }
    
    printf("\n\n\n");
    return 0;
}
