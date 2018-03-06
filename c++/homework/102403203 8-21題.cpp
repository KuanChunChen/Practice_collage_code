#include<stdio.h>
#include<stdlib.h>

int sum2(int);
int main()


{
	int n;
	
	printf("½Ğ¿é¤J¼Æ¦r¡G");
	scanf("%d",&n);
	
	
	printf("2+4+6+...+2n=%d", sum2(n));

	
	system("pause");
	return 0;
	
	
	
}


int sum2(int n)


{
	if (n>0)
	return (sum2(n-1)+2*n);
	
	else
	return 0;

}
