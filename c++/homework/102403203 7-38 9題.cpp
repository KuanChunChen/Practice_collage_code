// 102403203 ���a�v
// 7-38 9�D   

#include<stdio.h>
#include<stdlib.h>


int main()


{
    int a,sum=0; //���]�ܼ� 
    
 
 
 
 //�D�ج�1~50������ۥ[�ά۴�
 //�Q�έ��k���� A����-B����=(A+B)*(A-B)
 //�G���D�i� (1+2)(1-2)+(3+4)(3-4)+...+(49+50)(49-50) 
  
for(a=1;a<=50;a=a+2) 
    sum+=(a-(a+1))*(a+(a+1)); 
    printf("���D���׬��G%d\n",sum);//��X�`�M 
    
    system("pause");
    return 0 ;
    
    
    
    
    
    
    
    
    
    
    
    }
