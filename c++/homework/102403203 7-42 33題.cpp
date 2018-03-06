// 102403203 陳冠鈞
// 7-42  32題   





#include<stdio.h>
#include<stdlib.h>


int main(void)
{ 
 int m,num;
 bool prime; //用來判斷條件成立與否 
 
 	
 	/*必須輸入大於2的數才能測是否為質數*/
 do{
   printf("請輸入正整數:");/*輸入欲測整數*/
   scanf("%d",&num);
    } while (num<=2);
 
    
     for(m=2;m<=num-1;m++)
   /*判斷質數*/ 
    {
    
   
    if(num%m==0)
    {
     prime = 0;  //將prime設為false
     num--;//若可整除，則輸入的數字減1
    }
     prime =1; //若不可整除，則prime為true
    
    }
    
    while(prime == false);
      printf("此數最大的質數為：%d\n",num);
      system("pause");
      return 0 ;
  
  
  } 
