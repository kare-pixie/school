#include <stdio.h>



int main()

{

    int n;



    scanf("%d", &n);

    if(n>=-50 && n<-30 || n>20 && n<=40)

        printf("in");

    else

        printf("out");



    return 0;

}
