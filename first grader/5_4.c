#include <stdio.h>
#include <math.h>

int main()
{
    int i, j;
    for(i=1; i<=7; i++){
        for(j=1; j<=4-abs(i-4); j++){
            printf("■");
        }
        printf("\n");
    }
    return 0;
}
