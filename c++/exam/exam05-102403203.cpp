#include <stdio.h>
#include <stdlib.h>
int main(void)
{int i,x=-1,sum=0;


for(i=1;i<=500;i++)
{
sum+=x;
}

/*算式=1-2+3-4+5-6+...+999-1000
  由上式可看出 每兩項 相加的值為-1
  例如(1+(-2))=-1
  所以原式中有1000/2=500個
  故執行迴圈500次，並相加則得到結果*/
printf("1-2+3-4+5-6+...+999-1000=%d",sum);


   system("pause");
   return 0;
}
