#include <stdio.h>
#include <math.h>

int main()
{
    int i, j;
    for(i=1; i<=7; i++){
        for(j=2; j<=abs(4-i)+2; j++){
            printf("■");
        }
        printf("\n");
    }
    return 0;
}
