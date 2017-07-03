#include<stdio.h>

int main()
{
	int arr[99], max, mid, i, j, temp;
	int counts[10]={0};
	for(i=0; i<99; i++){
		scanf("%d",&arr[i]);
		counts[arr[i]]++;
	}
	for(i=0; i<99; i++)
		for(j=0; j<99; j++)
			if(arr[i]>arr[j]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
	mid=arr[49];
	printf("%d\n",mid);
	max=counts[1];
	for(i=2; i<=9; i++)
		if(max<counts[i])
			max=counts[i];
	for(i=1; i<=9; i++)
		if(max==counts[i])
			printf("%d ",i);
	return 0;
}