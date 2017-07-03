#include <stdio.h>

int main()
{
	int a,i,sum=0;
	scanf("%d",&a);
	for(i=0;i<=a;i+=2)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
