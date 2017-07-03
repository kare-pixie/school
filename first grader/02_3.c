#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b)
		printf("%c",'>');
	if(a<b)
		printf("%c",'<');
	if(a==b)
		printf("%c",'=');
	return 0;
}
