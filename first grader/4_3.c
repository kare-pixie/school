#include <stdio.h>

int main(void)
{
 int len;
 char dan[100];
 scanf("%s",dan);
 len=0;
 while(dan[len] != 0)
  len++;
 printf("%d",len);
 return 0;
}
