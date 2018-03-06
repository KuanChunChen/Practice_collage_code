#include <stdio.h>
#include <stdlib.h>
int main(void)
{

int arr[5]={31,17,33,22,16};
int *ptr;

ptr=arr;
/*陣列每項+10後*/
printf(" a[0]加10=%d\n",*(arr+0)+10);
printf(" a[1]加10=%d\n",*(arr+1)+10);
printf(" a[2]加10=%d\n",*(arr+2)+10);
printf(" a[3]加10=%d\n",*(arr+3)+10);
printf(" a[4]加10=%d\n",*(arr+4)+10);







   system("pause");
   return 0;
}
