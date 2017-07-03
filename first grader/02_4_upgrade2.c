#include <stdio.h>

int main()
{
	int a,b,i,s,k;
	scanf("%d",&k);
	scanf("%d",&a);
	s=a;
	for(i=1;i<k;i++)
	{
		scanf("%d",&b);
		if(s>b)
			s=b;
		b=0;
	}
	printf("%d",s);
	return 0;
}
