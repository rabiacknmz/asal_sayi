#include <stdio.h>
#include <math.h>
int main(){
	int x,y,sayac,toplam=0;
   printf("sayi giriniz.");
   scanf("%d",&x);
   printf("sayi giriniz");
   scanf("%d",&y);
   if(x<2 || y<2){
   	printf("sayilari tekrar giriniz");
   	scanf("%d , %d ",&x ,&y);
   }
   if(x>=2 && x<y){
   	for(int i=x;i<y;i++)
    {
    	for(int j=2;j<=i;j++)
       if(i%j==0)
       {
           sayac++;
       }    
    }     
    
    if(sayac==0){
    	
    	toplam=toplam+ i;
    	sayac=0;
	}
}

   printf ("iki sayi arasindaki asal sayilarin toplami=%d",toplam);
   return 0;
}
