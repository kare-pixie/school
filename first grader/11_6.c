#include<stdio.h>

int Array_length(char *input)
{
    int count=0;

    while(input[count] != '\0') count++;
    return count;
}

int main(void)
{
 char arr[500];
 int i=0, j=0;

 scanf("%s", arr);

 i=Array_length(arr);
 
 for(j;(i-j)>2; j++)
 {
  i--;
  if(arr[i]!=arr[j])
  {
   printf("no");
   break;
  }
 }
 if((i-j)<=2)
  printf("yes");
	return 0;
}