#include <stdio.h>
#include <stdlib.h>
int main(void)
{

int arr[5]={31,17,33,22,16};
int *ptr;

ptr=arr;
/*�}�C�C��+10��*/
printf(" a[0]�[10=%d\n",*(arr+0)+10);
printf(" a[1]�[10=%d\n",*(arr+1)+10);
printf(" a[2]�[10=%d\n",*(arr+2)+10);
printf(" a[3]�[10=%d\n",*(arr+3)+10);
printf(" a[4]�[10=%d\n",*(arr+4)+10);







   system("pause");
   return 0;
}
