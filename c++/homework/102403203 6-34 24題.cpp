#include<stdio.h>
#include<stdlib.h>



int main()


{
   
   int i=1;
   int sum=0;
      
     
   first: //�лx 
   	sum+=i;
   	i=i+2;
   	
	   if(i<=100) //�p�Gi�p��100�^��лx�B 
	   {
	    goto first ; 
       }
       
   printf("1-100��ƶ����_�ƩM���G%d\n",sum); 
   
   system ("pause");
   return 0 ;
   } 
