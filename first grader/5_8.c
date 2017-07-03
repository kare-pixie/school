#include <stdio.h>

int main ()
{
    int j, n, i;
    printf("몇 단까지? ");
    scanf("%d", &n);
    for(j=2; j<=n; j++){
    for(i=1; i<=9; i++)
        printf("%d × %d = %2d \n",j, i, j*i);
        printf("\n");
    }
	return 0;
}
