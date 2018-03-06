// 102403203 陳冠鈞
// 7-42  32題   





#include<stdio.h>
#include<stdlib.h>


int main(void)
{ 
 int m,n;
 	
 	/*必須輸入大於2的數才能測是否為質數*/
 do{
   printf("請輸入正整數:");/*輸入欲測整數*/
   scanf("%d",&n);
    } while (n<=2);
 
    
     for(m=2;m<=n-1;m++)
   /*判斷質數*/ 
     {
   
    if(n%m==0)
     printf("%d不是質數",n);
    
    else
     printf("%d是質數\n",n);
     return 0;
    }
	  

  system("pause");
  return 0 ;
  
  
  } 
