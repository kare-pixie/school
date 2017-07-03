#include <stdio.h>
#include <string.h>
#define SIZE 10

//sort 함수를 정의하시오. sort 함수 이외 필요한 함수를 더 정의해서 사용해도 됩니다.
void sort(char str[][20])
{
  int i,j;
   char temp[20];
  for(j=0;j<10;j++)
  for(i=0;i<10;i++)
  {
      if(strcmp(str[i],str[j])>0)
     {
           strcpy(temp,str[i]);
      strcpy(str[i],str[j]);
           strcpy(str[j],temp);
    }
  }
}

int main()
{
   char names[SIZE][20];
   int i;
   
   for(i=0; i<SIZE; i++)
      gets(names[i]);
      
   sort(names);
   
   for(i=0; i<SIZE; i++)
      puts(names[i]);
   
   return 0;
}