#include <stdio.h>
#include <stdlib.h>
#define f(x) 4*(x)*(x)+6*(x)-5 /*�D�ت���{��*/
int main()
{   
   printf("f(1.0)=%.2f\n",f(1.0));
   printf("f(2.2)=%.2f\n",f(2.2));
   printf("f(3.14)=%.4f\n",f(3.14));/*�y�D�ت��n�D���⦡*/
   
   system("pause");
   return 0;
}
