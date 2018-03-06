#include <stdio.h>
#include <stdlib.h>
#define f(x) 4*(x)*(x)+6*(x)-5 /*題目的方程式*/
int main()
{   
   printf("f(1.0)=%.2f\n",f(1.0));
   printf("f(2.2)=%.2f\n",f(2.2));
   printf("f(3.14)=%.4f\n",f(3.14));/*造題目的要求的算式*/
   
   system("pause");
   return 0;
}
