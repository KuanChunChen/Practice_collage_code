#include <stdio.h>
#include <stdlib.h>
int main(void)
{int i,x=-1,sum=0;


for(i=1;i<=500;i++)
{
sum+=x;
}

/*�⦡=1-2+3-4+5-6+...+999-1000
  �ѤW���i�ݥX �C�ⶵ �ۥ[���Ȭ�-1
  �Ҧp(1+(-2))=-1
  �ҥH�즡����1000/2=500��
  �G����j��500���A�ìۥ[�h�o�쵲�G*/
printf("1-2+3-4+5-6+...+999-1000=%d",sum);


   system("pause");
   return 0;
}
