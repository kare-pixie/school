#include <stdio.h>

int main()
{
	int a,b,i,s;
	scanf("%d",&a);
	s=a;
	for(i=1;i<=9;i++)
	{
		scanf("%d",&b);
		if(s>b)
			s=b;
		b=0;
	}
	printf("%d",s);
	return 0;
}
