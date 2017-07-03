//작성자:김혜린
//작성일:2016.04.09
#include <stdio.h>

int main()
{
    int k,e,m,c,h=0;
    int avg;
    double i=0;

    printf("%-15s : ","Korean");
    scanf("%d",&k);

    printf("%-15s : ","English");
    scanf("%d",&e);

    printf("%-15s : ","Mathmetics");
    scanf("%d",&m);

    printf("%-15s : ","C Programming");
    scanf("%d",&c);

    h=k+e+m+c;
    printf("%-15s : %d\n","Sum",h);

    i=h/4.0;
    printf("%-15s : %.2lf\n","Average",i);
    printf("%-15s : ","Grade");

    avg = i/10;
    switch(avg)
    {
        case 10:
            printf("A"); break;
        case 9: printf("A"); break;
        case 8: printf("B"); break;
        case 7: printf("C"); break;
        case 6: printf("D"); break;
        default : printf("F");
    }
    return 0;
}
