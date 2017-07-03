#include <stdio.h>

int main(void)
{
  	char arr[50];
	int len=0;
	char asc;
	int i;

	scanf("%s",&arr);
	asc=arr[0];
	while(arr[len]!=0)
		len++;

		for(i=1; i<len; i++){
			if(asc<arr[i])
				asc=arr[i];}

		printf("%c",asc);

 return 0;
}
