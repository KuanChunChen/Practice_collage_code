#include <stdio.h>
#include <stdlib.h>

int wow(int,int);
double my_fun(int); /*³Ð³y¨ç¦¡*/ 
int main(void)
{     
   printf("my_fun(3)=%f\n",my_fun(3));
   printf("my_fun(4)=%f\n",my_fun(4));
   printf("my_fun(5)=%f\n",my_fun(5));
   printf("my_fun(6)=%f\n",my_fun(6));
      
   system("pause");
   return 0;
}

double my_fun(int n)
{
   int k=1;
   double sum=0.0;
   for(k=1;k<=n;k++)
      
	  sum+=1.0/wow(2,k);
	  
   return sum;
}

int wow(int base, int n)
{
   int i;
   int pow=1;
   for(i=1;i<=n;i++)
      pow*=base;
   return pow;
}

