#include <stdio.h>

int main()
{
    int d,i;
    double r;

    printf("%-15s : ","deposit");
    scanf("%d",&d);

    printf("%-15s : ","rate");
    scanf("%lf",&r);
    printf("Year%25s","Amount of Deposit\n");
    for(i=1;i<=10;i++)
        printf("%2d%22d\n",i,d=d+d*r);
        
    return 0;
}
