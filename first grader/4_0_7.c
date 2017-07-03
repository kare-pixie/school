#include <stdio.h>



int main()

{
    int n, i;
    long long f0, f1, temp;
    f0=0; f1=1;
    scanf("%d",&n);
    if(n==1) f1=0;
    else for(i=3; i<=n; i++){
        temp=f1;
        f1=f0+f1;
        f0=temp;
    }
    printf("%lld",f1);
    return 0;

}
