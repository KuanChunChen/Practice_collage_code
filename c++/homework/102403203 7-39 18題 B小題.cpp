// 102403203 陳冠鈞
// 7-39 18題 B小題 



#include<stdio.h>
#include<stdlib.h>


int main()

 
    
{
	int n,y=0,c;
	
	printf("請輸入n值：");
	scanf("%d",&n);
for(c=2;c<=n;c=c+2)   
        
        y+=c;
        printf("2+4+...+%d的總和為%d\n",n,y);
       //計算2+4+6+....+n 
         
	while(n<0)
	{
	printf("輸入錯誤，請再次輸入n值：");
	scanf("%d",&n);
		
	}
	 printf("我認為do while迴圈較適合計算該題目\n，因為while 迴圈" );
	 printf("是在條件成立時執行該迴圈");
	 printf("下面的指令\n") ;
	 printf("而do while 是 在跳回原本迴圈重新執行\n") ;
	 
    system("pause");
    return 0 ;
    

}
