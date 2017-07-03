#include <stdio.h>

int main()
{
   int s1,s2,h,i=0;

   printf("%-7s %-7s %s\n","side1","side2","hypotenuse");

   for(s1=1; s1<=100; s1++){
        for(s2=1; s2<=100; s2++){
            for(h=1; h<=100; h++){
                if(s1*s1+s2*s2==h*h){
                    i++;
                    printf("%5d %7d %12d\n",s1, s2, h);
                }
            }
        }
   }

   return 0;

}
