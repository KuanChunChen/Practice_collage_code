// 102403203 陳冠鈞
// 7-38 9題   

#include<stdio.h>
#include<stdlib.h>


int main()


{
    int a,sum=0; //假設變數 
    
 
 
 
 //題目為1~50的次方相加或相減
 //利用乘法公式 A平方-B平方=(A+B)*(A-B)
 //故原題可拆成 (1+2)(1-2)+(3+4)(3-4)+...+(49+50)(49-50) 
  
for(a=1;a<=50;a=a+2) 
    sum+=(a-(a+1))*(a+(a+1)); 
    printf("該題答案為：%d\n",sum);//輸出總和 
    
    system("pause");
    return 0 ;
    
    
    
    
    
    
    
    
    
    
    
    }
