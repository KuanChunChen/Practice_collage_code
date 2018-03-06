#include<stdio.h>
#include<stdlib.h>



int main()


{
   
   int season;
   printf("輸入季節(1:春2:夏3:秋4:冬)：\n");   
   scanf("%d",&season);  // 輸入季節 
   
   switch (season) //判斷輸入的為何季節
    
   { case 1:
printf("春天\n");  
 break ;

 case 2:
printf("夏天\n");    
break;

 case 3:
printf("秋天\n");    
break;

 case 4:
printf("冬天\n");    
break;

default: 
printf("failed\n");  

}



system("pause");
return 0 ;








}


