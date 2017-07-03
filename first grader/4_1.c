#include <stdio.h>

int main()
{
    int arr[10];
	int max, min, sum, i;

	for(i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}

	max = min = sum = arr[0];
	for(i = 1; i < 10; i++){
		sum +=arr[i];
		if(max < arr[i])
			max = arr[i];
		if(min > arr[i])
			min = arr[i];
	}

	printf("%d \n", max);
	printf("%d \n", min);
	printf("%d \n", sum);
	return 0;
}
