// 102403203 ���a�v
// 7-42  32�D   





#include<stdio.h>
#include<stdlib.h>


int main(void)
{ 
 int m,n;
 	
 	/*������J�j��2���Ƥ~����O�_�����*/
 do{
   printf("�п�J�����:");/*��J�������*/
   scanf("%d",&n);
    } while (n<=2);
 
    
     for(m=2;m<=n-1;m++)
   /*�P�_���*/ 
     {
   
    if(n%m==0)
     printf("%d���O���",n);
    
    else
     printf("%d�O���\n",n);
     return 0;
    }
	  

  system("pause");
  return 0 ;
  
  
  } 
