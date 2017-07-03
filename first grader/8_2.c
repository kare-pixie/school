#include <stdio.h>

int main()
{
   int i;
   double sum=4.0f;

   for(i=3;(int)(sum*10000)!=31415;i=i+2){
        if(i%4==3){
            sum-=4.0/i;}
        if(i%4==1){
            sum+=4.0/i;}

   }
   printf("%.10lf\n", sum);
    return 0;
}
