#include <stdio.h>

int main()
{
    int i, a;
    printf("출력할 단은? ");
    scanf("%d", &a);

    for(i = 1; i <= 9; i++)
        printf("%d × %d =%3d\n", a, i, a * i);
    return 0;
}