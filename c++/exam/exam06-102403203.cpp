#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int x=1,y=1;
do{
    
    
    do
    {
       printf(" %d*%d=%d",y,x,y*x);     
            
       y++;
       }
    while(y<=9);
    printf("\n");
   x++;
   y=1;
    }while(x<=9);

   system("pause");
   return 0;
}
