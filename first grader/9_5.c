#include <stdio.h>

int main(void)
{
	int n, k;
	int inc=1;

	scanf("%d", &n);

	if(n==0)
	{
		return 0;
	}

	for(k=0; inc*2<=n ; k++)
	{
		inc=inc*2;
	}

	printf("%d", k);
	return 0;;
}
