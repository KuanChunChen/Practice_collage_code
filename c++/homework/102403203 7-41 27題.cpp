// 102403203 陳冠鈞
// 7-41 27題   





#include<stdio.h>
#include<stdlib.h>


int main()
{
	
    int a,b,c;
	
	 for(a=1;a<=5;a++) //相當於執行出幾行 
	 
	  {
	  for(c=4;c>=a;c--)
	  printf(" "); 
	   //利用迴圈輸出空格 
	  
	  for(b=1;b<=a;b++)
	   printf("%d",b);  
	   printf("\n");  
	   //輸出各值並且輸出往下一行 
	  }
		
		
		
		
		system("pause");
        return 0;
}
