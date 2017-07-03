#include <stdio.h>

int main()
{
	int a,i,sum=0,flag;
	scanf("%d",&a);
	if(a<0)
	{
		a=a*-1;
		flag=1;
	}
	for(i=0;i<=a;i++)
	{
		sum=sum+i;
	}
	if(flag==1)
	{
		sum=sum*-1;
	}
	printf("%d",sum);
	return 0;
}
