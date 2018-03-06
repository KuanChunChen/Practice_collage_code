#include<stdio.h>
#include<stdlib.h>



int main()


{
   
   int i=1;
   int sum=0;
      
     
   first: //標誌 
   	sum+=i;
   	i=i+2;
   	
	   if(i<=100) //如果i小於100回到標誌處 
	   {
	    goto first ; 
       }
       
   printf("1-100整數間的奇數和為：%d\n",sum); 
   
   system ("pause");
   return 0 ;
   } 
