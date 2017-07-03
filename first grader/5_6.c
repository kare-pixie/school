#include <stdio.h>

int main()
{
    int i, j, k;
    for(k=2; k<=6; k=k+4){
        for (i=1;i<=9;i++) // 행(세로) 출력
        {
            for (j=k;j<=k+3;j++) // 열(가로) 출력
            {
                printf("%d × %d =%3d  ", j, i, (j * i));
            }
            printf("\n"); // 1줄 출력 후 줄바꿈
        }
        printf("\n");
    }
    return 0;
}
