#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int i;

 printf("�п�J�u�@�ɼơG");
 scanf("%d",&i);

if(i<40)
printf("�z���~�ꬰ%d",i*100);
else if (i>40&&i!=0)
printf("�z���~�ꬰ%d",(40*100)+(i-40)*125);
else
printf("�z��J�����~");

system("pause");
return 0;
}
