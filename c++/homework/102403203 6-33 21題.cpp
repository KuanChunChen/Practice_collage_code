#include<stdio.h>
#include<stdlib.h>



int main()


{
   
   char x;
   printf("按下鍵盤任一鍵：\n");   
   scanf("%c",&x);  // 輸入任意值 
   
   switch (x)  //判斷輸入的字元是否為a,b 
   
   {
case 'a':
	
printf("你輸入的是小寫a\n");  
 break ;

	case'b': 
printf("你輸入的是小寫b\n");  
 break ;
   
   default:
   	
printf("你輸入的不是a也不是b\n");  
   
   
   
   
   
   
   } 
   
   
   
   
   system ("pause");
   return 0 ;
   
   
   
   
   
   
   
   
   
   
   
   } 
