#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int i;

 printf("請輸入工作時數：");
 scanf("%d",&i);

if(i<40)
printf("您的薪資為%d",i*100);
else if (i>40&&i!=0)
printf("您的薪資為%d",(40*100)+(i-40)*125);
else
printf("您輸入的有誤");

system("pause");
return 0;
}
