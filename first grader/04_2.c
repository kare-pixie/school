#include <stdio.h>

int main(void)
{
  	char arr[50];
	int len=0;
	int i;

	scanf("%s",&arr);
	while(arr[len]!=0)
		len++;

		for(i=0; i<len; i++){
			printf("%c ",arr[i]);}
			return 0;
		}