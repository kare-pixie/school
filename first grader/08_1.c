#include <stdio.h>

int main()
{
   int i=0;

   printf("%-10s %-10s %s\n","Decimal","Octal","Hex");
   printf("%4d %10d %9d\n",i ,i, i);

   for(i=1;i<=100;i++)
    printf(" %3d  %#9o  %#8X\n",i, i, i);

   return 0;

}
