// 102403203 ���a�v
// 7-42  32�D   





#include<stdio.h>
#include<stdlib.h>


int main(void)
{ 
 int m,num;
 bool prime; //�ΨӧP�_���󦨥߻P�_ 
 
 	
 	/*������J�j��2���Ƥ~����O�_�����*/
 do{
   printf("�п�J�����:");/*��J�������*/
   scanf("%d",&num);
    } while (num<=2);
 
    
     for(m=2;m<=num-1;m++)
   /*�P�_���*/ 
    {
    
   
    if(num%m==0)
    {
     prime = 0;  //�Nprime�]��false
     num--;//�Y�i�㰣�A�h��J���Ʀr��1
    }
     prime =1; //�Y���i�㰣�A�hprime��true
    
    }
    
    while(prime == false);
      printf("���Ƴ̤j����Ƭ��G%d\n",num);
      system("pause");
      return 0 ;
  
  
  } 
