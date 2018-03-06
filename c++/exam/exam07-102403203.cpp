#include <stdio.h>
#include <stdlib.h>
int sum2(int);


int main(void)
{
    int x;
printf("請輸入一數：");
scanf("%d",&x);
printf("2+4++...+2n= %d",sum2(x));


   system("pause");
   return 0;
}

int sum2(int n)

{
    if (n>0)
    return(sum2(n-1)+n*2);
    else
    return 0;

    }
