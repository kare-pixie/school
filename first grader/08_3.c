
#include <stdio.h>

int main()
{  int i,a,b;
   for(i=1;i<=100;i++)
   {   a=i/10;
       b=i-a*10;
       printf("%3d  ",i);
        switch(a)
        {   case 10:
                printf("C");break;
            case 9:
                printf("XC");break;
            case 8:
                printf("LXXX");break;
            case 7:
                printf("LXX");break;
            case 6:
                printf("LX");break;
            case 5:
                printf("L");break;
            case 4:
                printf("XL");break;
            case 3:
                printf("XXX");break;
            case 2:
                printf("XX");break;
            case 1:
                printf("X");break; }

            switch(b)
        {   case 9:
                printf("IX");break;
            case 8:
                printf("VIII");break;
            case 7:
                printf("VII");break;
            case 6:
                printf("VI");break;
            case 5:
                printf("V");break;
            case 4:
                printf("IV");break;
            case 3:
                printf("III");break;
            case 2:
                printf("II");break;
            case 1:
                printf("I");break;
            }
            printf("\n");
    }
   return 0;
}
