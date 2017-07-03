#include <stdio.h>
#define SIZE 50


int main()

{
    int n, i;
    long long fibo[SIZE];

    scanf("%d",&n);
    fibo[0]=0; fibo[1]=1;

    for(i=2; i<n; i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }

    printf("%lld",fibo[n-1]);
    return 0;

}
