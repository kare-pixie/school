#include<stdio.h>

int IsPrime(int n);

int main(void)
{
	int i=2, cnt=0, k;

	scanf("%d",&k);

	while(cnt!=k)
	{
		if(IsPrime(i)==1)
		{
			printf("%d ", i);
			cnt++;
		}
		i++;
	}
	return 0;
}

int IsPrime(int n)	   // 소수면 true(1) 리턴
{
	int divisors=0, i;

	for(i=1; i<=n; i++)
	{
		if(n%i==0)
			divisors++;
	}

	if(divisors==2)
		return 1;

	return 0;
}
