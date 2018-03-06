#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
#define circle(r) ((pi)*(r)*(r))
#define rectangle(length,height) ((length)*(height))
#define triangle(base,height)((base)*(height)/2.)
int main()
{   
 float r=1.0,length=5.0,x=4.6,w=12.2,h=9.4;
 printf("半徑為1.0的圓面積：%.2f\n",circle(r));
 printf("長為5.0寬為4.6的長方形面積：%.2f\n",rectangle(length,x));
 printf("底為12.2,高為9.4的三角形面積：%.2f\n",triangle(w,h));
 
 
 
   system("pause");
   return 0;
}

