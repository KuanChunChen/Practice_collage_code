#include<stdio.h>
#include<stdlib.h>



int main()


{
   
   int season;
   printf("��J�u�`(1:�K2:�L3:��4:�V)�G\n");   
   scanf("%d",&season);  // ��J�u�` 
   
   switch (season) //�P�_��J������u�`
    
   { case 1:
printf("�K��\n");  
 break ;

 case 2:
printf("�L��\n");    
break;

 case 3:
printf("���\n");    
break;

 case 4:
printf("�V��\n");    
break;

default: 
printf("failed\n");  

}



system("pause");
return 0 ;








}


