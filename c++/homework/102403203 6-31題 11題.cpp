#include<stdio.h>
#include<stdlib.h>
int main ()
{
 
  
    int x; //���]�uŪX�p�� 
    int y ;
    int z ;
    printf("�п�J�uŪ�ɼơG");
    scanf("%d",&x);
    
	
	
	
	if(x>=0&&x<=60) //�p�G�uŪ�ɼƬO60�p�ɤ� 
    
    {
    printf("�`�@�uŪ%d�p��\n�`�~��=%d",x,x*75);
    
    }
    else if (x>=61&&x<=75) //�p�G�uŪ�ɼƬO60-75�p�� 
    {
    y= (x-60)*93.75+4500 ;
    
	printf("�`�@�uŪ%d�p��\n�`�~��= %d",x,y);
    }
    
    else if (x>75) //75�p�ɥH�W 
    {
    
    z= (x-75)*131.25 + 5906.25 ;
    printf("�`�@�uŪ%d�p��\n�`�~��= %d",x,z);
    }
    
    else 
    printf("failed\n");
       
    system("pause");
    return 0;


    }
