#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
#define circle(r) ((pi)*(r)*(r))
#define rectangle(length,height) ((length)*(height))
#define triangle(base,height)((base)*(height)/2.)
int main()
{   
 float r=1.0,length=5.0,x=4.6,w=12.2,h=9.4;
 printf("�b�|��1.0���ꭱ�n�G%.2f\n",circle(r));
 printf("����5.0�e��4.6������έ��n�G%.2f\n",rectangle(length,x));
 printf("����12.2,����9.4���T���έ��n�G%.2f\n",triangle(w,h));
 
 
 
   system("pause");
   return 0;
}

