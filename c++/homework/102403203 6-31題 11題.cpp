#include<stdio.h>
#include<stdlib.h>
int main ()
{
 
  
    int x; //假設工讀X小時 
    int y ;
    int z ;
    printf("請輸入工讀時數：");
    scanf("%d",&x);
    
	
	
	
	if(x>=0&&x<=60) //如果工讀時數是60小時內 
    
    {
    printf("總共工讀%d小時\n總薪資=%d",x,x*75);
    
    }
    else if (x>=61&&x<=75) //如果工讀時數是60-75小時 
    {
    y= (x-60)*93.75+4500 ;
    
	printf("總共工讀%d小時\n總薪資= %d",x,y);
    }
    
    else if (x>75) //75小時以上 
    {
    
    z= (x-75)*131.25 + 5906.25 ;
    printf("總共工讀%d小時\n總薪資= %d",x,z);
    }
    
    else 
    printf("failed\n");
       
    system("pause");
    return 0;


    }
