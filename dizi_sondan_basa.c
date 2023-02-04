#include <stdio.h>
// 5 elemanlı dizinin elemanları sondan başa listelenir

int main() 

{
    
 int dizi[] = {10,20,30,40,50};
 
 int i;
 
 printf("ilk durum:\n");
 
  for(i = 0 ; i < 5 ; i++)
  {
   printf("dizi[%d] = %d\n",i,dizi[i]);	
  }	
  printf("\n");
 	
 int gecici;
 
 for(i = 0 ; i < 2 ; i++)
 {                          // 1.ADIM                               // 2.ADIM
  gecici = dizi[i];        // gecici=dizi[0] yani gecici=10         // gecici=dizi[1] yani gecici=20
  
  dizi[i] = dizi[4-i];     // dizi[0]=dizi[4] yani dizi[0]=50       // dizi[1]=dizi[3] yani dizi[1]=40
  
  dizi[4-i] = gecici;	   // dizi[4]=10                            // dizi[3]=20
 }	
  	
  	
  printf("son durum:\n");
  
  for(i = 0 ; i < 5 ; i++)
  {
   printf("dizi[%d] = %d\n",i,dizi[i]);		
  } 
 
 return 0;
  
}