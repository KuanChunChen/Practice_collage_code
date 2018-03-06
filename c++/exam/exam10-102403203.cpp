#include <stdio.h>
#include <stdlib.h>
int add2(int []);


int main(void)
{
int x,y,arr2[5]={1,2,3,4,5};

printf("原始數據：");

  
  for (x=0;x<5;x++)
 { printf("%d",arr2[x]);
 }
 printf("\n");
 add2(arr2);
  
  printf("+2後陣列：");
    for (y=0;y<5;y++)
 { printf("%d",arr2[y]);
 }
  

   system("pause");
   return 0;
}




int add2 (int n[])


{ 
    
  int i;  
  for (i=0;i<5;i++)  
  n[i]=n[i]+2;  
    
    
    }
