// 102403203 ���a�v
// 7-39 18�D B�p�D 



#include<stdio.h>
#include<stdlib.h>


int main()

 
    
{
	int n,y=0,c;
	
	printf("�п�Jn�ȡG");
	scanf("%d",&n);
for(c=2;c<=n;c=c+2)   
        
        y+=c;
        printf("2+4+...+%d���`�M��%d\n",n,y);
       //�p��2+4+6+....+n 
         
	while(n<0)
	{
	printf("��J���~�A�ЦA����Jn�ȡG");
	scanf("%d",&n);
		
	}
	 printf("�ڻ{��do while�j����A�X�p����D��\n�A�]��while �j��" );
	 printf("�O�b���󦨥߮ɰ���Ӱj��");
	 printf("�U�������O\n") ;
	 printf("��do while �O �b���^�쥻�j�魫�s����\n") ;
	 
    system("pause");
    return 0 ;
    

}
