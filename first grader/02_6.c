#include <stdio.h>

int main()
{
	int a=170,i,j,k;

	scanf("%d %d %d",&i,&j, &k);
	if(i>170 && j>170 && k>170)
        printf("PASS");
    else
        printf("CRASH");

	return 0;
}
