#include <stdio.h>
#define SIZE 10

int main()
{
    int arr1[SIZE], arr2[SIZE], i, n;

    scanf("%d", &n);
    for(i = 0; i < SIZE; i++)
        scanf("%d", &arr1[i]);

   for(i=0; i<n%10; i++)
	   arr2[i]=arr1[SIZE-(n%10-i)];

	for(i=n%10; i<SIZE; i++)
		arr2[i]=arr1[i-n%10];


    for(i = 0; i < SIZE; i++)
        printf("%d ", arr2[i]);

    return 0;
}
